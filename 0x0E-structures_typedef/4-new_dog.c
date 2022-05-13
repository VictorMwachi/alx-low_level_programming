#include "main.h"
#include <stdlib.h>
/**
 * new_dog - creates new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int namelen, ownerlen, i;

	d = (dog_t *)(malloc(sizeof(dog_t)));
	if (d == NULL)
	{
		return (NULL);
	}
	namelen = ownerlen = 0;
	while (*name++)
	{
		namelen++;
	}
	d->name = malloc(sizeof(d->name) * namelen);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < namelen; i++)
		d>name[i] = name[i];
	d->age = age;
	while (*owner++)
	{
		onwerlen++;
	}
	d->owner = malloc(sizeof(d->owner) * ownerlen);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < ownerlen; i++)
		d->owner[i] = owner[i];
	return (d);
}
