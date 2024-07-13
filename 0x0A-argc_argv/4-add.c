#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: size of argv
 * @argv: string array of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, addit = 0;

	if (argc < 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		addit += atoi(argv[i]);
	}
	printf("%d\n", addit);

	return 0;
}
