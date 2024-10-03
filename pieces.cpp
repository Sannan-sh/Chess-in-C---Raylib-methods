#include "raylib.h"
#include "pieces.h"

// Declare whiteRookTexture as a global variable

Texture2D whiteRookTexture;
Texture2D whiteknightTexture;
Texture2D whitebishopTexture;
Texture2D whitequeenTexture;
Texture2D whitekingTexture;
Texture2D whitepawnTexture;
Texture2D blackRookTexture;
Texture2D blackknightTexture;
Texture2D blackbishopTexture;
Texture2D blackqueenTexture;
Texture2D blackkingTexture;
Texture2D blackpawnTexture;


int load() {
    // Load the images 
    Image whiteRookImage = LoadImage("whiterook.png");
    ImageResize(&whiteRookImage, squareSize, squareSize); 
    whiteRookTexture = LoadTextureFromImage(whiteRookImage);
    UnloadImage(whiteRookImage);

    Image whiteknightImage = LoadImage("whiteknight.png");
    ImageResize(&whiteknightImage, squareSize, squareSize); 
    whiteknightTexture = LoadTextureFromImage(whiteknightImage);
    UnloadImage(whiteknightImage);

    Image whitebishopImage = LoadImage("whitebishop.png");
    ImageResize(&whitebishopImage, squareSize, squareSize); 
    whitebishopTexture = LoadTextureFromImage(whitebishopImage);
    UnloadImage(whitebishopImage);

    Image whitequeenImage = LoadImage("whitequeen.png");
    ImageResize(&whitequeenImage, squareSize, squareSize); 
    whitequeenTexture = LoadTextureFromImage(whitequeenImage);
    UnloadImage(whitequeenImage);

    Image whitekingImage = LoadImage("whiteking.png");
    ImageResize(&whitekingImage, squareSize, squareSize); 
    whitekingTexture = LoadTextureFromImage(whitekingImage);
    UnloadImage(whitekingImage);

    Image whitepawnImage = LoadImage("whitepawn.png");
    ImageResize(&whitepawnImage, squareSize, squareSize); 
    whitepawnTexture = LoadTextureFromImage(whitepawnImage);
    UnloadImage(whitepawnImage);

    Image blackRookImage = LoadImage("blackrook.png");
    ImageResize(&blackRookImage, squareSize, squareSize); 
    blackRookTexture = LoadTextureFromImage(blackRookImage);
    UnloadImage(blackRookImage);

    Image blackknightImage = LoadImage("blackknight.png");
    ImageResize(&blackknightImage, squareSize, squareSize); 
    blackknightTexture = LoadTextureFromImage(blackknightImage);
    UnloadImage(blackknightImage);

    Image blackbishopImage = LoadImage("blackbishop.png");
    ImageResize(&blackbishopImage, squareSize, squareSize); 
    blackbishopTexture = LoadTextureFromImage(blackbishopImage);
    UnloadImage(blackbishopImage);

    Image blackqueenImage = LoadImage("blackqueen.png");
    ImageResize(&blackqueenImage, squareSize, squareSize); 
    blackqueenTexture = LoadTextureFromImage(blackqueenImage);
    UnloadImage(blackqueenImage);

    Image blackkingImage = LoadImage("blackking.png");
    ImageResize(&blackkingImage, squareSize, squareSize); 
    blackkingTexture = LoadTextureFromImage(blackkingImage);
    UnloadImage(blackkingImage);

    Image blackpawnImage = LoadImage("blackpawn.png");
    ImageResize(&blackpawnImage, squareSize, squareSize); 
    blackpawnTexture = LoadTextureFromImage(blackpawnImage);
    UnloadImage(blackpawnImage);

    return 0;
}
int pieces() {

    int rookX = 0 * squareSize + (squareSize - whiteRookTexture.width) / 2;
    int rookY = 7 * squareSize + (squareSize - whiteRookTexture.height) / 2;
    DrawTexture(whiteRookTexture, rookX, rookY, WHITE);

    int knightX = 1 * squareSize + (squareSize - whiteknightTexture.width) / 2;
    int knightY = 7 * squareSize + (squareSize - whiteknightTexture.height) / 2;
    DrawTexture(whiteknightTexture, knightX, knightY, WHITE); // or BLACK depending on piece color
    
    int bishopX = 2 * squareSize + (squareSize - whitebishopTexture.width) / 2;
    int bishopY = 7 * squareSize + (squareSize - whitebishopTexture.height) / 2;
    DrawTexture(whitebishopTexture, bishopX, bishopY, WHITE);

    int knight2X = 6 * squareSize + (squareSize - whiteknightTexture.width) / 2;
    int knight2Y = 7 * squareSize + (squareSize - whiteknightTexture.height) / 2;
    DrawTexture(whiteknightTexture, knight2X, knight2Y, WHITE);
    
    int bishop2X = 5 * squareSize + (squareSize - whiteRookTexture.width) / 2;
    int bishop2Y = 7 * squareSize + (squareSize - whiteRookTexture.height) / 2;
    DrawTexture(whitebishopTexture, bishop2X, bishop2Y, WHITE);

    int queenX = 3 * squareSize + (squareSize - whitequeenTexture.width) / 2;
    int queenY = 7 * squareSize + (squareSize - whitequeenTexture.height) / 2;
    DrawTexture(whitequeenTexture, queenX, queenY, WHITE);

    int kingX = 4 * squareSize + (squareSize - whitekingTexture.width) / 2;
    int kingY = 7 * squareSize + (squareSize - whitekingTexture.height) / 2;
    DrawTexture(whitekingTexture, kingX, kingY, WHITE);

    int rook2X = 7 * squareSize + (squareSize - whiteRookTexture.width) / 2;
    int rook2Y = 7 * squareSize + (squareSize - whiteRookTexture.height) / 2;
    DrawTexture(whiteRookTexture, rook2X, rook2Y, WHITE);

    for (int i = 0; i < 8; i++)
    {
        int pawnX = i * squareSize + (squareSize - whitepawnTexture.width) / 2;
        int pawnY = 6 * squareSize + (squareSize - whitepawnTexture.height) / 2;
        DrawTexture(whitepawnTexture, pawnX, pawnY, WHITE); 
    }
    

    return 0;
}   