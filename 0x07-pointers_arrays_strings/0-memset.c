#include "holberton.h"

/**
 * _memset -fills the first n
 *@s: char
 *@b: char
 *Return: s
 *@n: number
 */
char *_memset(char *s, char b, unsigned int n)

{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;
return (s);
}