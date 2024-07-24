#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to seach from
 * @size: size of  the array
 * @cmp: function to make comparison
 *
 * Return: index of 1st elem where cmp does no return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			break;
	}

	return (i);
}
