#include "holberton.h"
/**
* print_alphabet_x10 - print alphabet
* @void - no argument
*
* Return: void
*/
void print_alphabet_x10(void)
{
char b;
int i;

for (i = 1; i < 10; i++)
{
for (b = 'a'; b <= 'z'; b++)
{
_putchar(b);
}
_putchar('\n');
}
}
