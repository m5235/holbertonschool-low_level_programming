#include "holberton.h"
#include <stdio.h>
/**
*_isdigit - isdigit integer
*@c: integer
* Return: return 1 return 0
*
*/
int _isdigit(int c)

{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}