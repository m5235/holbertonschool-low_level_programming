#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat -concat string
 *@s1: string
 *@s2:  string
 *@n: first byte
 *Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, l = 0, k = 0;
if (s1 == NULL)
	s1 = "";
	for (i = 0; s1[i]; i++)
	;
if (s2 == NULL)
s2 = "";
for (j = 0; s2[j]; j++)
;
	if (j < n)
	n = j;
	p = malloc((i + n + 1) * sizeof(char));
	if (p == NULL)
	return (NULL);
	for (l = 0; l < i  ; l++)
	p[l] = s1[l];
	for (k = 0; k < n; k++)
	p[k + l] = s2[k];
	p[l + k] = '\0';
	return (p);
}
