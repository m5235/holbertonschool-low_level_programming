#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: Find and print the largest prime factor of the number
 * 612852475143
 * Return: 0
 */
void main(void)
{
	char i;
	long num = 612852475143;

	for (c = (char) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", i);
			
		}
	}

	return (0);
}
