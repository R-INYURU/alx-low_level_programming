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
		count++;

	for (i = (count - 1); i >= 0; i--)
		_putchar(str[i]);
	_putchar('\n');
}
