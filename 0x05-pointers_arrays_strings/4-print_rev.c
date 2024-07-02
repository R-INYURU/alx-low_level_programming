#include "main.h"

/**
 * print_rev - print a string in reverse
 * @str: string to print
 *
 * Return: void
 */
void print_rev(char *str)
{
	int i;
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		++count;

	for (i = 0; count != 0; i++)
	{
		_putchar(str[count]);
		--count;
	}
	_putchar('\n');
}
