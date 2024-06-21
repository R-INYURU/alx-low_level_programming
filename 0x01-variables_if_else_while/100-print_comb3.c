#include <stdio.h>

/**
 * main - Starting block
 *
 * Return: void(0)
 */
int main(void)
{
	int n = 48;
	int d = 48;

	for (n = 48; n < 58; n++)
	{
		for (d = 48; d < 58; d++)
		{
			if (n == d)
				continue;
			else if (n > d)
				continue;
			putchar(n);
			putchar(d);

			if (n == 57)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
