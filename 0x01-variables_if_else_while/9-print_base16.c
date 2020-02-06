#include <stdio.h>
/**
*main - entry point
*@void: takes no arguments
*Return: int
*
*/
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
if (n < '9')
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\N');
return (0);
}
