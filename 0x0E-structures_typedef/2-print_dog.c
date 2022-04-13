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
		printf("Name: %s\n", ((d.name == NULL) ? d->name : "(nil)"));
		printf("Age: %s\n", ((d.age == NULL) ? d.age : "(nil)"));
		printf("Owner: %s\n", ((d.owner == NULL) ? d.owner : "(nil)"));
	}
}
