#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print all the elements of a list
 * @h: header list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	unsigned int i;

	for (i = 0; ptr != NULL; i++)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (i);
}
