#include "holberton.h"
/**
*puts_half - puts
*@str: chaine
*Return: 0
*
*/
void puts_half(char *str)
{
int i, j = 0;
while (str[j])
j++;
if (j % 2 == 0)
{
i = j / 2;
}
else
{
i = (j + 1) / 2;
}
while (i < j)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
