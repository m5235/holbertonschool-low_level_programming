#include "holberton.h"
/**
*main - entry point
*
*Return: int
**
*/
void print_alphabet (void);
{
char i;
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
return (0);
}