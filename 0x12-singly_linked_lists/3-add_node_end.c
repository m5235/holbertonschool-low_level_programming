#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node_end -adds a new node at the end
 *@head: header
 *@str: string
 *Return: ptr
 */
list_t *add_node_end(list_t **head, const char *str)

{
	list_t *ptr = *head;
	list_t *m;
	unsigned int i;
m = malloc(sizeof(list_t));
if (m == NULL)
return (NULL);
for (i = 0; str[i]; i++)
m->str = strdup(str);
m->len = i;
m->next = NULL;
if (ptr == NULL)
{
ptr = m;
return (m);
}
while (ptr && ptr->next)
ptr = ptr->next;
ptr->next = m;
return (m);
}
