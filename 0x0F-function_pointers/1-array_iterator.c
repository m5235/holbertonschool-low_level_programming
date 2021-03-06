#include "function_pointers.h"
/**
 *array_iterator - function given as a parameter on each element of an array
 *@array: pointer of array
 *@size: size of the array
 *@action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
	if ((array == 0) || (action == 0))
	return;
	for (i = 0; i < size; i++)
	action(array[i]);
}
