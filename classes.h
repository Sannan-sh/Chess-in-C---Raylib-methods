#include "raylib.h"
#include "pieces.h"
#include <cmath>


class Rook{
    public:
    int row, col;
    Texture2D rookTexture;

    Rook(int initRow, int initCol, Texture2D texture) {
        row = initRow;
        col = initCol;
        rookTexture = texture;
    }
    void drawRook(int squareSize) {
        int rookX = col * squareSize + (squareSize - rookTexture.width) / 2;
        int rookY = row * squareSize + (squareSize - rookTexture.height) / 2;
        DrawTexture(rookTexture, rookX, rookY, WHITE);
    }
    void move(int newRow, int newCol) {
        row = newRow;
        col = newCol;
    }

};

class Knight {
public:
    int row, col;
    Texture2D knightTexture;

    // Constructor for initializing the knight's position and texture
    Knight(int initRow, int initCol, Texture2D texture) {
        row = initRow;
        col = initCol;
        knightTexture = texture;
    }

    // Function to draw the knight on the board
    void drawKnight(int squareSize) {
        int knightX = col * squareSize + (squareSize - knightTexture.width) / 2;
        int knightY = row * squareSize + (squareSize - knightTexture.height) / 2;
        DrawTexture(knightTexture, knightX, knightY, WHITE);
    }

    // Function to move the knight if the move is valid
    bool move(int newRow, int newCol) {
        // Check if the move is a valid knight move (L-shape)
        if ((abs(newRow - row) == 2 && abs(newCol - col) == 1) || 
            (abs(newRow - row) == 1 && abs(newCol - col) == 2)) {
            row = newRow;
            col = newCol;
            return true;  // Move was successful
        }
        return false;  // Invalid move for a knight
    }
};
