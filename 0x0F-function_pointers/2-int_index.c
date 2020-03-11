#include "function_pointers.h"

/**
 *int_index -searches for an integer
 *@array: pointer of array
 *@size: size
 *@cmp: compare
 *Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if ((cmp == 0) || (array == 0) || (size <= 0))
	return (-1);
	for (i = 0; i < size; i++)
	if (cmp(array[i]))
{
	return (i);
}
return (-1);
}
