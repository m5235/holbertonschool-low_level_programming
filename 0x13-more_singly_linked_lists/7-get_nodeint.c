#include "lists.h"


/**
 *get_nodeint_at_index -function that returns the nth node
 *@head: header
 *@index: indexx of list
 *Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
for (i = 0; head != NULL; i++)
{
	if (index == i)
		return (head);
		head = head->next;

}
return (NULL);
}
