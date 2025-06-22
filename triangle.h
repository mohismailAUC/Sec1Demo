// triangle.h
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "canvas.h"

/**
 * @brief Draws an approximate equilateral triangle on the canvas using only borders.
 * @param canvas The Canvas object to draw on.
 * @param baseWidth The width of the triangle's base.
 * @param bottomLeftX The X-coordinate of the bottom-left corner of the base.
 * @param bottomLeftY The Y-coordinate of the bottom-left corner of the base.
 * @param borderChar The character to use for the border.
 */
void drawTriangle(Canvas& canvas, int baseWidth, int bottomLeftX, int bottomLeftY, char borderChar = '^');

#endif // TRIANGLE_H
