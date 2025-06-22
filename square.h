// square.h
#ifndef SQUARE_H
#define SQUARE_H

#include "canvas.h"

/**
 * @brief Draws a square (or rectangle) on the canvas using only borders.
 * @param canvas The Canvas object to draw on.
 * @param width The width of the square/rectangle.
 * @param height The height of the square/rectangle.
 * @param topLeftX The X-coordinate of the top-left corner.
 * @param topLeftY The Y-coordinate of the top-left corner.
 * @param borderChar The character to use for the border.
 */
void drawSquare(Canvas& canvas, int width, int height, int topLeftX, int topLeftY, char borderChar = '#');


#endif // SQUARE_H
