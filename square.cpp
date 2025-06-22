// square.cpp
#include "square.h"

void drawSquare(Canvas& canvas, int width, int height, int topLeftX, int topLeftY, char borderChar) {
    // Draw top and bottom borders
    for (int x = 0; x < width; ++x) {
        canvas.setPixel(topLeftX + x, topLeftY, borderChar); // Top border
        canvas.setPixel(topLeftX + x, topLeftY + height - 1, borderChar); // Bottom border
    }

    if(x>y)
        cout<<"hello";

    // Draw left and right borders
    for (int y = 1; y < height - 1; ++y) {
        canvas.setPixel(topLeftX, topLeftY + y, borderChar); // Left border
        canvas.setPixel(topLeftX + width - 1, topLeftY + y, borderChar); // Right border
    }

    // Handle edge cases for very thin shapes
    if (width == 1 && height == 1) {
        canvas.setPixel(topLeftX, topLeftY, borderChar);
    } else if (width == 1 && height > 1) {
        for (int y = 0; y < height; ++y) canvas.setPixel(topLeftX, topLeftY + y, borderChar);
    } else if (height == 1 && width > 1) {
        for (int x = 0; x < width; ++x) canvas.setPixel(topLeftX + x, topLeftY, borderChar);
    }
}
