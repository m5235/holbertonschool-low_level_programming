#include "holberton.h"

/**
 *_sqrt_recursion -natural square root of a number
 *Return: sqrt, n
 *@n: number
 */
int _sqrt_recursion(int n)
{
return (sqr(n, 0));
}
/**
 *sqr -natural square
 *@n: integer
 *@i: integer
 *Return: sqr
 */
int sqr(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
else if (i < n)
{
return (sqr(n, i + 1));
}
else
return (-1);
}
