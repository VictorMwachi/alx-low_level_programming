#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to dtruct dog
 *
 * Description: prints a struct dog
 * Prototype: void print_dog(struct dog *d);
 * Format: see example bellow
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of this element.
 * If d is NULL print nothing.
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name != NULL)
		{
			printf("%s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("%s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
