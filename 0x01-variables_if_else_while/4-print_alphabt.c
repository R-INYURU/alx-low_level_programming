#include <stdio.h>

/**
 * main - starting block
 *
 * Return: void(0);
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');

	return (0);
}
