#include "holberton.h"
#include <stdio.h>
/**
*print_array - print
*
*@a: array
*@n: number
*/
void print_array(int *a, int n)

{
int i = 0;
while (i < n)
{
if (i != n  - 1)
printf("%d, ", a[i]);
else
printf("%d\n", a[i]);
i++;
}
}
