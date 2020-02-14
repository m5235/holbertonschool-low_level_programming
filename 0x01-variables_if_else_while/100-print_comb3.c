#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)

{
int i= 0;
for (i = 0 ; i <= 89 ; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if ((i != 89) && (i == i + 10))
{
    putchar(' ');
putchar(',');

}
}
putchar('\n');
return (0);
}
