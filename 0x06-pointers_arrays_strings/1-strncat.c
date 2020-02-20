#include "holberton.h"
/**
 * 
 * 
 */
char *_strncat(char *dest, char *src, int n)

{ 
    int a, i;
 

    for (i = 0; i < n && dest[i] = '\0'; i++)
    ;
    for (a = 0; a < n && src[a] = '\0'; a++)
    dest[i + 1] = src[a];
    return (dest);
}