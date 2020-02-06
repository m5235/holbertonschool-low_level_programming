#include <stdio.h>
/**
*main - entry point
*@void: takes no arguments
*Return: int
*
*/
int main(void)
{
char m = 'm';
char n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
while (m <= 'c')
{
putchar(m);
m++;
}
putchar('\n');
return (0);
}
