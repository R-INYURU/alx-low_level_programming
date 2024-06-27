#include "main.h"

/**
 * more_numbers - prints 10x number from 0 to 14, end with new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
				_putchar((n / 10) + 48);

			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
