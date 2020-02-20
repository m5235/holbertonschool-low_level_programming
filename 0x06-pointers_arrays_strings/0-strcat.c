#include "holberton.h"
/**
 *_strcat - concatination ch
 *@dest:  ch
 *@src:  ch
 *Return: dest
 *
 */
char *_strcat(char *dest, char *src)
{
int i, a;
for (i = 0; dest[i] != '\0'; i++)
;
for (a = 0; src[a] != '\0'; a++)
dest[i + a] = src[a];
return (dest);
}