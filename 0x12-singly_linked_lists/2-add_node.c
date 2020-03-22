#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node -adds a new node
 *@head: header
 *@str: string
 *Return: ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	unsigned int i;

ptr = malloc(sizeof(list_t));
if (ptr == NULL)
return (NULL);


ptr->str = strdup(str);
ptr->len = i;
ptr->next = *head;
*head = ptr;
	return (*head);
}
