#include "main.h"
#include <stdlib.h>

/**
 * create_array - craete array of chars and initialize it w/ specific char
 * @size: size of the array to create
 * @c: character to initialize with
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *c_ptr;
	unsigned int i = 0;

	c_ptr = malloc(sizeof(char) * size);
	if (c_ptr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		c_ptr[i] = c;
		i++;
	}
	return (c_ptr);
}
