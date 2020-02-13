#include "holberton.h"
#include <stdio.h>
/**
*print_line - print line
*
*@n: number line
*
*/
void print_line(int n)

{
int i;
for (i = 0; i < n; ++i)
_putchar('_');
_putchar('\n');
}
