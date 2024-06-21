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
	int l = 48;

	for (n = 48; n < 58; n++)
	{
		for (d = 48; d < 58; d++)
		{
			for (l = 48; l < 58; l++)
			{
				if (n == d || d == l)
					continue;
				else if (n > d || d > l)
					continue;
				putchar(n);
				putchar(d);
				putchar(l);

				if (n == 55 && d == 56 && l == 57)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
