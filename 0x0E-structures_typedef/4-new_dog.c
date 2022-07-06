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
	dog_t *dogpoint;

	(void)(age);
	dogpoint = malloc(sizeof(dog_t));
	if (dogpoint == NULL)
	{
		free(dogpoint);
		return (NULL);
	}
	dogpoint->name = name;
	dogpoint->owner = owner;
	dogpoint->age = age;
	return (dogpoint);
}
