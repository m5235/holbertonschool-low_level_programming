#include "function_pointers.h"
/**
 *print_name - funtion print name
 *@name:  name of print
 *@f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	return;
	f(name);

}
