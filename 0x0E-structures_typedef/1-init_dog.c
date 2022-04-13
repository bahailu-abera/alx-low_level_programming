#include "dog.h"
/**
 * init_dog - initializes instance of dog
 * @d: struct d
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: No return value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
