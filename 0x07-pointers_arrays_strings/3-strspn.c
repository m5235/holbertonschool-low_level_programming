#include "holberton.h"

/**
 *_strspn -gets the length of a prefix
 *@s: char
 *@accept: char
 *Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
while (s[i] != '\0')
i++;
{
for (j = 0; accept[j]; j++)
{
if (s == accept[j])
break;
if  (!accept[j])
break;
}
}
return (i);
}
