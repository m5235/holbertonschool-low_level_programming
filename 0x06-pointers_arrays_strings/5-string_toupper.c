#include "holberton.h"

/**
 *string_toupper -string touper
 *@ch: char
 *Return: ch
 */
char *string_toupper(char *ch)
{
    int i;
for (i = 0; ch[i]!='\0'; i++) {
   if(ch[i] >= 'a' && ch[i] <= 'z') {
      ch[i] = ch[i] - 32;
   }
}

}
