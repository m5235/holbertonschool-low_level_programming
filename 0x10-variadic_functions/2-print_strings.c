#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - print string
 * @separator: paramettre of char
 * @n:parametre of int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
va_list list;

va_start(list, n);


for (i = 0; i < n; i++)
	{
	ptr = va_arg(list, char*);
if (!ptr)
{
printf("(nill)");
}
	else
	{
	printf("%s", ptr);
	}
if ((separator != NULL) && (i < n - 1))

	printf("%s", separator);

	}
printf("\n");
va_end(list);
}
