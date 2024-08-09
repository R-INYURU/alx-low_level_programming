#include "main.h"

/**
 * get_endianness - get the order in which this computer saves its work
 *
 * Return: 1 for Little and 0 for Big endian
 */
int get_endianness(void)
{
	int endian = 1;
	char *test = (char *) &endian;

	return (*test);
}
