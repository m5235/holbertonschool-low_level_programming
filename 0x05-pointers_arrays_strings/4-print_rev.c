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
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[_strlen(s) - i - 1]);
}
_putchar('\n');
}

/**
 *_strlen - copie legnth
 *@s: pointer
 *Return: 0
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i]; i++)
;
return (i);
}
