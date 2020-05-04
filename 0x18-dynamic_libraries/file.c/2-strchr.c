#include "holberton.h"
#include "stdio.h"
/**
 *_strchr -locates a character in a string
 *@s: char
 *@c: char
 *Return: 0
 */
char *_strchr(char *s, char c)

{
int i, j;
for (i = 0; s[i] != '\0'; i++)
;
for (j = 0; i >= j ; j++)
{
if (s[j] == c)
return (&(s[j]));
}
return (0);
}
