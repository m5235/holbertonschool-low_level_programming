#include "holberton.h"

/**
 *print_rev - print strings in reverse
 *@s: characters
 *
 *Return: 0
 */

void print_rev(char *s)
{
int i;
for (i = 0; s[i]; i++)
;
while (i)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
