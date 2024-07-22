#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: always 0;
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n\n", my_dog.name, my_dog.age);
	printf("Hey! this is %s, I own this s** dog called %s, and is %.1f old,\
its sh*tty one, my I will kick out side if it doesn't get a job soon.\n",
		   my_dog.owner, my_dog.name, my_dog.age);
	return (0);
}
