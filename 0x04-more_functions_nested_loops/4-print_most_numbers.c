#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 and skip 2 and 4,
 * end with new line
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
