#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - this funciton creates a new dog struct of type dog_t storing the
 * a copy of name and owner in it.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the structure of type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int var1, var2;
	dog_t *dogpoint;

	dogpoint = malloc(sizeof(dog_t));
	if (dogpoint == NULL)
	{
		free(dogpoint);
		return (NULL);
	}
	dogpoint->name = malloc(sizeof(name));
	if (name == NULL)
	{
		free(dogpoint);
		return (NULL);
	}
	dogpoint->owner = malloc(sizeof(owner));
	if (owner == NULL)
	{
		free(dogpoint->name);
		free(dogpoint);
		return (NULL);
	}
	for (var1 = 0; name[var1]; var1++)
	{
		dogpoint->name[var1] = name[var1];
	}
	dogpoint->name[var1] = '\0';
	for (var2 = 0; owner[var2]; var2++)
	{
		dogpoint->owner[var2] = owner[var2];
	}
	dogpoint->owner[var2] = '\0';
	dogpoint->age = age;
	return (dogpoint);
}
