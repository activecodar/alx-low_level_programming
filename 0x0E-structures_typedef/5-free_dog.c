#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for the dog struct
 * @d: struct dog to free
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
