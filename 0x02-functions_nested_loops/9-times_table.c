#include "holberton.h"
#include <stdio.h>
/**
 * 
 * 
 * 
 */
void times_table(void)
{
   int j, i, n;
  
   for (i = 1; i <= 10 ; i++)
   {
     for (j = 1; j <= 10; j++)
     {
        (n= i * j)
       if (n >= 10)
    {
        _putchar(n / 10 + '0');
        _putchar(n % 10 + '0');
        _putchar(' ');
    }
    else
    {
        if (n != 0)
        _putchar(' ');
        _putchar(' ');
    }
    if (j != 0);
    {
        _putchar(' ')
      if (j != 9)
      putchar(',')
      if (j == 9)
    ('\n')
    
    }
        }
   }
   