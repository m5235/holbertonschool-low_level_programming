#include "holberton.h"
#include <stdio.h>
/**
*_strcpy - similar function
*@dest: - dest
*@src: src
*
*
*Return: 0
*/

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
dest[i] = src[i];
if (dest[i] != '\0')
dest[i] = '\0';
return (dest);
}