#include "holberton.h"
#include "stdio.h"
/**
*main -output argv[0]
*@argc:number argument
*@argv: array
*Return: 0
*/
int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc ; i++)
{
	printf("%s\n", argv[i]);
}

return (0);
}