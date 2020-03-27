#include "lists.h"
#include <stdlib.h>


/**
 *free_list -function that frees
 *
 *@head: header file
 *
 */
void free_list(list_t *head)

{
	list_t *ptr;
while (head != NULL)
{
	ptr = head->next;
	free(head->str);
	free(head);
	head = ptr;
}
}
