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
	unsigned int var1, var2, var3, var4;
	dog_t *dogpoint;

	dogpoint = malloc(sizeof(dog_t));
	if (dogpoint == NULL)
	{
		free(dogpoint);
		return (NULL);
	}
	dogpoint->name = malloc(sizeof(name));
	if (dogpoint->name == NULL)
	{
		free(dogpoint);
		free(dogpoint->name);
		return (NULL);
	}
	dogpoint->owner = malloc(sizeof(owner));
	if (dogpoint->owner == NULL)
	{
		free(dogpoint);
		free(dogpoint->name);
		free(dogpoint->owner);
		return (NULL);
	}
	for (var3 = 0; name[var3]; var3++)
	{
	}
	for (var4 = 0; owner[var4]; var4++)
	{
	}
	for (var1 = 0; var1 < var3; var1++)
	{
		dogpoint->name[var1] = name[var1];
	}
	dogpoint->name[var3] = '\0';
	for (var2 = 0; var2 < var4; var2++)
	{
		dogpoint->owner[var2] = owner[var2];
	}
	dogpoint->owner[var4] = '\0';
	dogpoint->age = age;
	return (dogpoint);
}
