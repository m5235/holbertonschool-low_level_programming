#include "holberton.h"
#include <stdio.h>
/**
*swap_int - swaps the values
*@a: chaine
*@b: chaine
*Return: 0
*/
void swap_int(int *a, int *b)

{
int x;
x = *a;
*a = *b;
*b = x;
}
