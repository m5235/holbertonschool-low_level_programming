#include "holberton.h"

/**
 *_strlen - copie legnth
 *@s: pointer
 *Return: 0
 */

int _strlen(char *s)
{
int i;
for (i = 0; s[i]; i++)
;
return (i);
}
