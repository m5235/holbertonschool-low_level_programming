#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: elements of size
 *@size: size
 *Return: p and NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if ((nmemb == 0) || (size == 0))
{
return (NULL);
}
p = malloc(nmemb * size);
if (p == 0)
return (NULL);
for (i = 0; i < (size * nmemb) ; i++)
{
p[i] = 0;
}
return (p);
}
