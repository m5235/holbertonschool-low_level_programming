#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup -copy of the string
 *@str: string
 *Return: pointer
 */
char *_strdup(char *str)
{
	int i, j;
	char *n;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
n = malloc((i + 1) * sizeof(char));
if (n == NULL)
return (NULL);
for (j = 0; j < i; j++)
n[j] = str[j];
n[i] = '\0';
return (n);
}
