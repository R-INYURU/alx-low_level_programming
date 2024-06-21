#include <stdio.h>

/**
 * main - starting block
 *
 * Return: void(0)
 */
int main(void)
{
	int n = 48;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
