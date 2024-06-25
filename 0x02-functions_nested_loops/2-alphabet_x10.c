#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase
 * 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int c = 97;
	int n = 0;

	for (n = 0; n <= 10; n++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
