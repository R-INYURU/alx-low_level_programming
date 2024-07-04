#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(",");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check code
 *
 * Return: always 0
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int b[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 11, 17, 19, 23, 31};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	print_array(b, sizeof(b) / sizeof(int));
	reverse_array(b, sizeof(b) / sizeof(int));
	print_array(b, sizeof(b) / sizeof(int));
	return (0);
}
