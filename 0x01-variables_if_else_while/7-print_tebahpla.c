#include <stdio.h>
/**
*main - entry point
*@void: takes no arguments
*Return: int
*
*/
int main(void)
{
char i;

i = 'z';
while (i <= 'a')
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
