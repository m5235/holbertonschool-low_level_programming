#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *ptr = h;

for (i = 0; ptr != NULL; i++)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
}
return (i);
}
