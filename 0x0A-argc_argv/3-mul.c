#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -program that multiplies
 *@argc: number
 *@argv: array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, total = 1;

if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
for (i = 1; i < argc; i++)
total *= atoi(argv[i]);
printf("%d\n", total);
}
return (0);
}
