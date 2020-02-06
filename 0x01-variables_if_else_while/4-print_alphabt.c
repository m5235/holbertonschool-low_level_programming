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
i = 'a';
while (i <= 'z')
{
if ((i != 'e') && (i != 'q'))
putchar(i);
i++;
}
putchar('\n');
return (0);
}
