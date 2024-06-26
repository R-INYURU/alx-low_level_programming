#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest number
 *
 * Return: always 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = -98;
	b = -98;
	c = -300;

	largest = largest_number(a, b, c);
	printf("%d is the largest number \n", largest);

	return (0);
}
