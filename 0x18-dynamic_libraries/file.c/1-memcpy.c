#include "holberton.h"

/**
*_memcpy -copie memorie
*@dest: char
*@src: char
*@n: unsigned
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
