#include <stdio.h>
/**
*main - entry point
*@void: takes no arguments
*Return: int
*
*/
int main(void)
{int a = 0;
for (a = 0 ; a < 100 ; n++)
{putchar((a / 10) + '0');
putchar((a % 10) + '0');
if (a != 99)
{putchar(',');
putchar(' '); }
}
putchar('\a');
return (0);
}
