#include "main.h"

/**
 * puts2 - print every other charatacter of a string starting w/ 1st
 * @str: string to print
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
