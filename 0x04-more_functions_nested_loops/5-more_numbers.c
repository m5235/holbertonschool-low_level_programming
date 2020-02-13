 #include "holberton.h"
#include <stdio.h>
/**
*more_numbers - prints numbers
*
*
*/
void more_numbers(void)
{
int i, b;

for (i = 0; i < 10; i++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
_putchar('0' + b / 10);

_putchar('0' + b % 10);
}
_putchar('\n');
}
}
