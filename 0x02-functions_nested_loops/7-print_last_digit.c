#include "holberton.h"
/**
*print_last_digit -prints the last digit of a number
*@n: integer
*Return: n % 10
*int n : integer
*/
int print_last_digit(int n)
{
int num = n % 10;
if (n >= 0)
{
_putchar (num + '0');
return (num);
}
_putchar (num * -1 + '0');
return (num * -1);
}
