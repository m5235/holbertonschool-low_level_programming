#include "holberton.h"
/**
* print_alphabet - print alphabet
* @void - no argument
*
* Return: void
*/
void print_alphabet(void)
{
char i;
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
