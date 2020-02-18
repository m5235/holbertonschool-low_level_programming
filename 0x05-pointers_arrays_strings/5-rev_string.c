#include "holberton.h"

/**
* 
* 
* 
*/

 void rev_string(char *s)

 { int i, length = _strlen(s);
  char tmp;
 
for (i = 0 ;i < length / 2; i++)
{
tmp = s[i] ;
s[i] = s[length -i - 1] ;
s[length - i -1] = tmp ;
}
}

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
