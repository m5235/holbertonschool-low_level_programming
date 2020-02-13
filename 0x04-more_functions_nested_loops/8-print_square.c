#include "holberton.h"
#include "stdio.h"
/**
*print_square -print the number
*
*@size: return value
*/Return: 0
void print_square(int size)

{
int a, b;
if (size < 1)
{
_putchar('\n');
}
for (a = 0; a <= size; a++)
{
for (b = 0; b <= size; b++)
{
_putchar('#');
}
_putchar('\n');
}
