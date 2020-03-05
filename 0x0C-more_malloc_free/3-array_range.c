#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range -creates an array of integers
 *@min: value min
 *@max: value max
 *Return: p
 */
int *array_range(int min, int max)
{
	int i, len;
	int *p;
if (min > max)
	return (NULL);
	len = max - min + 1;
	p = malloc(len * (sizeof(int)));
	if (p == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < len; i++)
{
	p[i] = min;
		min++;
}
	return (p);
}