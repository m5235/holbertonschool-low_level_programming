#include "lists.h"
#include <stdlib.h>
/**
 *free_listint2 -function that frees
 *@head: header file
 */

void free_listint2(listint_t **head)

{
	listint_t *ptr = NULL;

	if (head)
		return;
		
while (*head != NULL)
{
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	}
	*head = NULL;
}
