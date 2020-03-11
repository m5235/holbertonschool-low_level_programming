#include "dog.h"
#include <stdio.h>

/**
 *print_dog -stract
 *@d: struct
 *Return : void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	if (d->name == NULL)
	printf("name: (nil)\n");
	else
	printf("name: %s\n", d->name);
	printf("age: %f\n", d->age);
	if (d->owner == NULL)
	printf("owner:(nill)\n");
	else
	printf("owner: %s\n", d->owner);
	}
