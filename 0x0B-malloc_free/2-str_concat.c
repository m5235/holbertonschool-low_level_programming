#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 **str_concat -concatenates two strings
 * @s1: char
 * @s2: char
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i = 0, j = 0;
unsigned int z, len;
char *n;
if (!(s1 == NULL))
{
for (i = 0; s1[i] != '\0'; i++)
;
}
if (!(s2 == NULL))
{
for (j = 0; s2[j] != '\0'; j++)
;
}
n = malloc((i + j + 1) * sizeof(char));
if (n == NULL)
return (NULL);
for (z = 0; z < i + j; z++)
n[z] = s1[z];
for (len = 0; len < i + j; len++)
n[len + i] = s2[len];
n[z] = '\0';
return (n);
}