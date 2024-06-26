#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - checks the number give is pos+ or neg-
 * @n: number given
 *
 * Return: void(0)
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
