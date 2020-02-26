#include "holberton.h"

/**
*is_prime_number -input integer is a prime numbe
*Return: prime
*@n: number
*
 */

int is_prime_number(int n)
{
	return (prime_number2(2, n));
}


/**
 *prime_number2 -input integer is a prime number
 *@n: number
 *Return: prime number 2
 *@i: incrementation
 */
int prime_number2(int i, int n)
{
if (n < i)
{
	return (0);
}
if (n > i)
{
	return (1);
}
if
(n % i != 0 && i != n)
{
	return (prime_number2(n, i + 1));
}
	return (1);
	}
