#include "holberton.h"

/**
 *string_toupper -string touper
 *@ch: char
 *Return: ch
 */
char *string_toupper(char *ch)
{
int i, j;
for (i = 0; i != '\0'; i++)
{
for (j = 0; j <= i; j++)
if (ch[i] >= 'a' && ch[i] <= 'z')
ch[i] = ch[i] - 32;
}
return (ch);
}
