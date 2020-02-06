#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*@void: takes no arguments
*Return: int
*
*/
int main(void)
{
int n, q;
srand(time(0));
n = rand() - RAND_MAX / 2;
q = n % 10;
printf("Last digit of %d ", n);
if (n > 0)
{
printf("is %d positive \n", q);
}
else if (n == 0)
{
printf("%d is zero \n", n);
}
else
{
printf("%d is negative \n", q);
}
return (0);
}
