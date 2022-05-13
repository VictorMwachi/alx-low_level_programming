#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialises dog struct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * @d: pointer ot stuct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
