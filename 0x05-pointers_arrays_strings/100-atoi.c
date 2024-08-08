#include "main.h"

/**
 * _atoi - convert string to an integer
 * @str: string to convert
 *
 * Return: integer value
 */
int _atoi(char *str)
{
	int i;
	int val = 1;

	for (i = 0; str[i] != ''; i++)
	{
		val = val * 10 + str[i] - '0';
	}
	return (val);
}
