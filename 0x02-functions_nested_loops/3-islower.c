#include "holberton.h"
/**
 * _islower -  lowser
 * @c: char
 *
 * Return: return (1) return (0)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}