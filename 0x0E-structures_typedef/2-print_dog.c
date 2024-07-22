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
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL &&
		d->age != 0 &&
		d->owner != NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n\n", d->owner);
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n\n", d->owner);
	}
}
