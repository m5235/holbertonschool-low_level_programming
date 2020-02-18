#include "holberton.h"
#include <stdio.h>
#include <string.h> 
/**
 *_strlen - copie legnth 
 * 
 * 
 */

int _strlen(char *s)
{
int i;
       for (i= 0; s[i]; ++i);
	return (i);
}
