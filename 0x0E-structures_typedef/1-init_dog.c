#include "dog.h"
#include <stdio.h>

/**
 *init_dog -init struct
 *@d: pointer
 *@name: pointer of char
 *@age: float
 *@owner: pointer of char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
