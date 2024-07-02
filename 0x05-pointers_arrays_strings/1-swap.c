#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*b = *a + *b;
	*a = *b - *a;
	*b = *b - *a;
}
