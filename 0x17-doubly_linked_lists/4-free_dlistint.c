#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a list
 * @head: header
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr = NULL;

while (head != NULL)
	{
ptr = head->next;
free(head);
head = ptr;
}
}
