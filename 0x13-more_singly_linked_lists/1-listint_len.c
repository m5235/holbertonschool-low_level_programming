#include "lists.h"

/**
 *list_len - function that returns the number of elements
 *@h: header
 *Return: i
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	unsigned int i;

	for (i = 0; ptr != NULL; i++)
{
	ptr = ptr->next;
}
	return (i);
}