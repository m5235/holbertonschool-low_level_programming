#include "holberton.h"

/**
*print_most_numbers - entry point
*@void: takes no arguments
*
*
*/
void print_most_numbers(void)
{
int i;
i = '0';
while (i <= '9')
{
if ((i != '2') && (i != '4'))
putchar(i);
i++;
}
putchar('\n');
}
