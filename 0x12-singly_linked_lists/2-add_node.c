#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - 
 * 
 * 
 * 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int i;
	
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
		if (head == NULL)
		return (NULL);
for (i = 0; str[i]; i++)
	 
	 ptr->str = strdup(str);
	ptr->len = i;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
