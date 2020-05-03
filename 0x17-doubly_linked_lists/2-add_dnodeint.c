#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of the linked list
 * @head: double pointer to the beginning of the linked list
 * @n: value to add to the new node
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *ptr;

if (head == NULL)
return (NULL);
ptr = malloc(sizeof(dlistint_t));
if (ptr == NULL)
return (NULL);
ptr->n = n;
ptr->prev = NULL;
ptr->next = *head;
*head = ptr;
if (ptr->next != NULL)
(ptr->next)->prev = ptr;
	return (ptr);
}