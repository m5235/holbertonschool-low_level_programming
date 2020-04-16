#include <stdio.h>

/**
 *get_endianness - retunrs
 * Return: 1 for little and 0 for big
 */

int get_endianness(void)
{
	unsigned int j;
return ((int) (((char *)&j)[0]));
}
