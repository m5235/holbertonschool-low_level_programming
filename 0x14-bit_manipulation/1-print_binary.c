#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
  * print_binary - print
  * @n: unsigned long int
  */

void print_binary(unsigned long n)
{

	if (n > 1)

		print_binary(n >> 1);
_putchar((n & 1) + '0');
}
