// triangle.cpp
#include "triangle.h"
#include <cmath> // For std::round

void drawTriangle(Canvas& canvas, int baseWidth, int bottomLeftX, int bottomLeftY, char borderChar) {
    if (baseWidth < 3) { // Minimum base width for a reasonable triangle
        if (baseWidth == 1) canvas.setPixel(bottomLeftX, bottomLeftY, borderChar);
        if (baseWidth == 2) {
            canvas.setPixel(bottomLeftX, bottomLeftY, borderChar);
            canvas.setPixel(bottomLeftX + 1, bottomLeftY, borderChar);
        }
        return;
    }

    // --- MODIFICATION HERE: Increased height factor for a taller, more visible triangle ---
    // ASCII characters are typically taller than wide, so a higher factor makes it look more like a triangle.
    int height = static_cast<int>(std::round(baseWidth * 0.75)); // Changed from 0.5 to 0.75
    if (height == 0) height = 1; // Ensure a minimum height

    int topY = bottomLeftY - height + 1; // Calculate the top row Y-coordinate

    for (int y = 0; y < height; ++y) {
        int currentY = topY + y;
        // Calculate the width of the current row (wider at base, narrower at top)
        int rowWidth = (int)std::round((double)baseWidth * (y + 1) / height);
        if (rowWidth == 0) rowWidth = 1; // Ensure at least 1 character for the tip
        if (rowWidth > baseWidth) rowWidth = baseWidth;

        int startX = bottomLeftX + (baseWidth - rowWidth) / 2;
        int endX = startX + rowWidth - 1;

        for (int x = startX; x <= endX; ++x) {
            // Draw border pixels only
            // Draw top (tip) row, bottom (base) row, and side edges
            if (y == 0 || y == height - 1 || x == startX || x == endX) {
                canvas.setPixel(x, currentY, borderChar);
            }
        }
    }
}
