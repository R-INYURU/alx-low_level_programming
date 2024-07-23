#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free the memory of the new dog object
 * @d: new dog object
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d);
}
