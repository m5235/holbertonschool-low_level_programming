#include "holberton.h"

/**
 *string_toupper -string touper
 *@ch: char
 *Return: ch
 */
char *string_toupper(char *ch)
{
int i, j;
for (i = 0; ch[i] != '\0'; i++)
;
for (j = 0; j < i; j++)
{
if (ch[j] >= 97 && ch[j] <= 122)
ch[j] = ch[j] - 32;
}
return (ch);
}
