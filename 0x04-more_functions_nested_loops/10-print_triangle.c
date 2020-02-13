#include "holberton.h"
#include "stdio.h"
/**
*print_triangle - print
*@size: number
*/
void print_triangle(int size)
{
int rows, i, j;
if (size <= 0)
_putchar('\n');
for (rows = size; rows > 0; rows--)
{
for (i = 1 ; i < rows; i++)
{
_putchar(' ');
}
for (j = size; j >= rows; j--)
_putchar('#');
_putchar('\n');
}
}
