#include "holberton.h"
/**
*_strncpy - copie string
*@dest: chaine
*@src: chaine
*@n: number
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)

{
int i;
for (i = 0; (dest[i] != '\0') && (i < n); i++)
dest[i] = src[i];
for (; src[i] != '\0'; i++)
;
return (dest);
}