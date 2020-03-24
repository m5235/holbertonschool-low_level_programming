#include "lists.h"
#include "stdio.h"

/**
 *print_listint -prints all the elements
 *
 *@h: header file
 *Return: i
 */
size_t print_listint(const listint_t *h)

{
const listint_t *ptr = h;
unsigned int i;
for (i = 0; ptr; i++)
printf("%d\n", ptr->n);
ptr = ptr->next;
return (i);
}
