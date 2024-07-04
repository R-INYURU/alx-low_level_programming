#include "main.h"

/**
 * reverse_array - reverses content of an array
 * @a: array variable
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp = 0;

	if (n % 2)
	{
		for (i = (n - 1); i > (n / 2); i--)
		{
			temp = a[i];
			a[i] = a[(n - 1) - i];
			a[(n - 1) - i] = temp;
		}
	}
	else
	{
		for (i = (n - 1); i >= (n / 2); i--)
		{
			temp = a[i];
			a[i] = a[(n - 1) - i];
			a[(n - 1) - i] = temp;
		}
	}
}
