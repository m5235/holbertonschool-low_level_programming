#include "holberton.h"

/**
 * _pow_recursion -raised to the power
 *@x: value of x
 *@y: value of y
 *Return: pow_recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
