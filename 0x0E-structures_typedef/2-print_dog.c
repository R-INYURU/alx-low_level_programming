#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints out the details of the dog structure
 * @d: pointer to the structure object
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

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
