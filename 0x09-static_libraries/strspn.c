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
unsigned int n = 0;
while (s[i] != '\0')
i++;
for (j = 0; accept[j] != '\0' ; j++)
{
if (s[i] == accept[j])
n++;
}
return (n);
}