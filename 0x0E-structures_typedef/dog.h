#ifndef DOG_H
#define DOG_H
/**
 *struct dog -new type
 *dog -file name
 *@name: pointer of char
 *@age: float
 *@owner: pointer of char
 */

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int  _putchar (char c);

#endif
