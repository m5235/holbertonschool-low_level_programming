#include "lists.h"
#include <stdlib.h>
/**
  * pop_listint - function that deletes the head node
  * @head: header
  * Return: 0
  */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;
if (!*head)
return (0);
{
ptr = (*head)->next;
n = (*head)->n;
free(*head);
*head = ptr;
}
return (n);
}
