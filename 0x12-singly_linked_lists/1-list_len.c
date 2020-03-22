#include "lists.h"
#include <stdio.h>

/**
 *list_len - function that returns the number of elements
 *@h: header
 *Return: i
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	unsigned int i;

	for (i = 0; ptr != NULL; i++)
{
	ptr = ptr->next;
}
	return (i);
}