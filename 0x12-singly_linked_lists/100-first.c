#include <stdio.h>

void __attribute__ ((constructor)) first(void);

/**
 * first - prints given text before main is executed
 *
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house my back!\n");
}
