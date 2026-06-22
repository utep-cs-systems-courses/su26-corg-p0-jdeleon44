#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
// Draws a vertical line down the center column of the triangle using '|'.
void print_triangle(int leftCol, int size)
{
  int centerCol = leftCol + size;
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) {
      if (col == centerCol) putchar('|');
      else putchar('*');
    }
    putchar('\n');
  }
}

// Prints an arrow pointing right with specified size
void print_arrow(int leftCol, int size)
{
  // Arrow head
  for (int row = 0; row < size; row++) {
    int col;
    for (col = 0; col < leftCol + size - row; col++) putchar(' ');
}
