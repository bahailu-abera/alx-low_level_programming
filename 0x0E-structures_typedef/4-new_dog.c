#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return:new_dog(Success)
 *       otherwise NULL
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, len_name, len_owner;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (len_name = 0; name[len_name]; len_name++)
		;

	for (len_owner = 0; owner[len_owner]; len_owner++)
		;

	p_dog->name = malloc(len_name + 1);
	p_dog->owner = malloc(len_owner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
	}

	for (i = 0; i < len_name; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;


	for (i = 0; i < len_owner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
