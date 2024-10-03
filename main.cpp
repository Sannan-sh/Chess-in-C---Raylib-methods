#include "raylib.h"
#include "pieces.h"
#include "classes.h"
#define minimalred (Color){104,33,27, 225}
#define minimalwhite (Color){245,245,200, 225}

const int screenWidth = 640;
const int screenHeight = 640;
const int boardSize = 8;         // 8x8 board
const int squareSize = screenWidth / boardSize;

// Colors for the themes
Color lightBrown = BEIGE;
Color darkBrown = DARKBROWN;
Color redwhite = minimalwhite;
Color black = minimalred;

Sound piecemove;

int main() {
    // Initialize the Raylib window
    InitWindow(screenWidth, screenHeight, "Chessboard GUI with Theme Switch");

    // Set FPS
    SetTargetFPS(60);

    // Initialize audio device
    InitAudioDevice();
    piecemove = LoadSound("piecemove.mp3");

    // Set FPS
    SetTargetFPS(60);
    bool isBlackWhiteTheme = false;

    // Load the pieces (assumed to be defined in "pieces.h")
    load();

    Rook myRook(7, 0, whiteRookTexture);
    Knight myKnight(7, 1, whiteknightTexture);

    while (!WindowShouldClose()) { // Detect window close button or ESC key
        // Switch theme when spacebar is pressed
        if (IsKeyPressed(KEY_SPACE)) {
            isBlackWhiteTheme = !isBlackWhiteTheme;
        }

        // Start Drawing
        BeginDrawing();

        // Clear the screen with a background color
        ClearBackground(minimalwhite);

        // Draw chessboard based on the current theme
        for (int row = 0; row < boardSize; row++) {
            for (int col = 0; col < boardSize; col++) {
                // Determine the color for each square based on the theme
                if ((row + col) % 2 == 0) {
                    // Light squares
                    DrawRectangle(col * squareSize, row * squareSize, squareSize, squareSize, 
                                  isBlackWhiteTheme ? redwhite : lightBrown);
                } else {
                    // Dark squares
                    DrawRectangle(col * squareSize, row * squareSize, squareSize, squareSize, 
                                  isBlackWhiteTheme ? black : darkBrown);
                }
            }
        }

        DrawText("Press SPACE to switch theme", 10, 10, 20, BLACK);
        
        // Draw the rook
        myRook.drawRook(squareSize);
        myKnight.drawKnight(squareSize);
        
        // Handle mouse click for rook movement
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
            int mouseX = GetMouseX();  // Get x-coordinate of mouse
            int mouseY = GetMouseY();  // Get y-coordinate of mouse
            
            // Calculate the corresponding board position
            int newRow = mouseY / squareSize;
            int newCol = mouseX / squareSize;

            // Only allow rook to move if it is either in the same row or same column
            if (newRow == myRook.row || newCol == myRook.col) {
            myRook.move(newRow, newCol);
            PlaySound(piecemove); 
            }
        }

        EndDrawing();
    }

    // Close window and OpenGL context
    CloseWindow();

    return 0;
}