#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the elements of the dog
 * @d: struct dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog\
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age:  %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}