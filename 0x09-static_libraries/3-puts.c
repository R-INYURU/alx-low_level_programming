#include "main.h"

/**
 * _puts - prints a string, ending with a new line
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
