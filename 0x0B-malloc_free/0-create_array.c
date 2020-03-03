#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array -crete array
*unsigned int size - integer
*@c: char
*@size: -size of array
*Return: array
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(size * sizeof(char));
if ((size == 0) || (arr == NULL))
return (NULL);
for (i = 0; i <= size; i++)
arr[i] = c;
return (arr);

}