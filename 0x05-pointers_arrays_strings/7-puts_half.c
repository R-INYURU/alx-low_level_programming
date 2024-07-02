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

	if (count % 2 == 0)
		half = count / 2;
	else
		half = (count / 2) + 1;

	for (i = half; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
