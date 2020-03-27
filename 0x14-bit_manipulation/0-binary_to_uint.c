#include "holberton.h"
#include <stdio.h>

/**
 *binary_to_uint -converts a binary number
 *@b: binary number
 *Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
int n = 0;
unsigned int len = 0;
	if (b == NULL)
	{
		return (0);
	}
while (b[len])
	{
	if (b[len] != '0' && b[len] != '1')
	return (0);
len++;
}
{
n = (n * 2) + (*b - '0');
}

	return (n);
}