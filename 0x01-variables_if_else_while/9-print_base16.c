#include <stdio.h>
/**
*main - entry point
*@void: takes no arguments
*Return: int
*
*/
int main(void)
{
int N = '0';
while (N <= '9')
{
putchar(N);
if (N < '9')
{
putchar(',');
putchar(' ');
}
N++;
}
putchar('\N');
return (0);
}
