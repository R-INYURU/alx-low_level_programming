#include <stdio.h>

/**
 * first - prints given text before main is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\nI bore my house my back!\n");
}
