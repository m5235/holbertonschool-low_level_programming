#include "holberton.h"

/**
 *_puts_recursion -prin recursion
 * @s: char
 */
void _puts_recursion(char *s)

{
int i;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}
