#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: char
 *@accept: char
 *Return: n
 */
char *_strpbrk(char *s, char *accept)

{
int i, j;
for (i = 0; s[i] != '\0'; i++)
;
for (j = 0; i>= j; j++)
{
if (s[j] == accept[j])
return (&(s[j]));
}
return (0);
}
