#include "function_pointers.h"

/**
 * array_iterator - execute a function given as parameter
 * @size: size of the array
 * @array: array to iterator through
 * @action: function to execute
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!size)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
