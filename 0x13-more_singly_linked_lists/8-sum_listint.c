#include "lists.h"

/**
 *sum_listint -function that returns the sum
 *@head: header
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

while (head != NULL)
{
	sum += head->n;
	head = head->next;
}
return (sum);
}
