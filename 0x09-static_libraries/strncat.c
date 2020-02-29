#include "holberton.h"
/**
 *_strncat - concatinate
 *@dest: char
 *@src: string
 *Return: dest
 *@n: number
 */
char *_strncat(char *dest, char *src, int n)

{
int i, a;
for (i = 0; dest[i] != '\0'; i++)
;
for (a = 0; (src[a] != '\0') && (a < n); a++)
dest[i + a] = src[a];
return (dest);
}