#include "lists.h"
#include "stdlib.h"

/**
 *add_nodeint_end -adds a new node at the end
 *@head: header
 *@n: const int
 *Return: ptr
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *ptr = *head;
	listint_t *m;

m = malloc(sizeof(listint_t));
if (m == NULL)
return (NULL);

m->n = n;

m->next = NULL;
if (ptr == NULL)
{
*head = m;
return (m);
}
while (ptr && ptr->next)
ptr = ptr->next;
ptr->next = m;
return (m);
}