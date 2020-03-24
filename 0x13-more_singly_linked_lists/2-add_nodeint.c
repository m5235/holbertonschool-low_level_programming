#include "lists.h"
#include "stdlib.h"
/**
 *add_nodeint -add new node
 *@head: header
 *@n: string
 *Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *ptr;

ptr = malloc(sizeof(listint_t));
if (ptr == NULL)
return (NULL);

if (head == NULL)
return (NULL);

ptr->n = n;
ptr->next = *head;
*head = ptr;
return (*head);
}
