#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 5.5, "Bill");
	printf("My name is %s, and I am %.1f :) - Woof!\n",
		   my_dog->name, my_dog->age);
	return (0);
}