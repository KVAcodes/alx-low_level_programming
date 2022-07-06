#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a created a dog struct
 * @d: pointer to variable of type struct dog or dog_t
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
