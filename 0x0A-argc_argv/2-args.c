#include <stdio.h>
/**
 *main -prints the number
 *@argc: number argument
 *@argv: array
 *Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);

}
