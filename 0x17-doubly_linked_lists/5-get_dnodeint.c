#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - look for a given node
 * @head: head of list
 * @index: index
 * Return: the node in index index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *ptr = head;
	unsigned int i;
while (ptr != NULL)
{
if (index == i)
return (ptr);
ptr = ptr->next;
i++;
}
return (NULL);
}
