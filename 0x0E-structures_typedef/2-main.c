#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	struct dog my_dog;
	struct dog this_dog;
	struct dog that_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	print_dog(&my_dog);
	this_dog.age = 7.6;
	this_dog.owner = "Thomas";
	print_dog(&this_dog);
	print_dog(&that_dog);
	return (0);
}
