#include "holberton.h"
#include <stdio.h>
/**
*_isupper -  isuper
* @c: char
*
* Return: return (1) return (0)
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}