#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * 
 */
char *str_concat(char *s1, char *s2)
{
	unsigned i = 0 , z, j = 0 ;
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
	for (z = 0; z < i + j; z++)
	n[z + i] = s2[z];
	n[z] = '\0';
	return (n);
}