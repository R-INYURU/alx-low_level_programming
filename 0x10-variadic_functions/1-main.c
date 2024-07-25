#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers("", 3, 1, 3, 5);
	print_numbers("-", 0, 1, 2, 3);
	return (0);
}
