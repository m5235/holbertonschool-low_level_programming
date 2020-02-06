#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - test if n greater or inferior to 5
* Return: 0
*/
int main(void)
{
int n, q;
srand(time(0));
n = rand() - RAND_MAX / 2;
q = n % 10;
printf("Last digit of %d is ", n);
if (n > 5)
{
printf("%d and is greater than 5 \n", q);
}
else if (n == 0)
{
printf("%d and is zero \n", n);
}
else
{
printf("%d and is less than 6 and not 0\n", n);
}
return (0);
}
