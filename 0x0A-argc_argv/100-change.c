#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coints for change
 * @argc: size of argv
 * @argv: string array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int change = 0, cents = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	do {
		if (cents >= 25)
		{
			change += cents / 25;
			cents %= 25;
		}
		else if (cents < 25 && cents >= 10)
		{
			change += cents / 10;
			cents %= 10;
		}
		else if (cents < 10 && cents >= 5)
		{
			change += cents / 5;
			cents %= 5;
		}
		else if (cents < 5 && cents >= 2)
		{
			change += cents / 2;
			cents %= 2;
		}
		else if (cents < 2 && cents >= 1)
		{
			change += cents / 1;
			cents %= 1;
		}
		else if (cents < 0)
			change = 0, cents = 0;
	} while (cents != 0);
	printf("%d\n", change);
	return (0);
}
