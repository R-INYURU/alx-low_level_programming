#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int count = 0;
	int half = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	half = count / 2;

	for (i = half; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
