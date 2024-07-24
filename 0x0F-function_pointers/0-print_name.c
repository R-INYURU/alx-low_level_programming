#include "function_pointers.h"

/**
 * print_name - prints the name from a fucntion passed as argument
 * @name: name to print
 * @f: function to print the name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name) || f == NULL)
		return;
	f(name);
}
