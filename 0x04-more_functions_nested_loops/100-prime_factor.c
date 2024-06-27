#include <stdio.h>

/**
 * main - starting block
 *
 * Return: always 0
 */
int main(void)
{
	long num = 612852475143;
	long j, prime;

	while (num % 2 == 0)
	{
		prime = 2;
		num = num / 2;
	}

	for (j = 3; (j * j <= num); j = j + 2)
	{
		while (num % j == 0)
		{
			prime = j;
			num = num / j;
		}
	}

	if (num > 2)
		prime = num;
	printf("%ld\n", prime);

	return (0);
}
