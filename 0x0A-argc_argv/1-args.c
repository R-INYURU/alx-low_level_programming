#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passed
 * @argc: number of arguments
 * @argv: string array of arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argv != NULL)
		printf("%d\n", --argc);
	return (0);
}
