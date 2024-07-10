#include "main.h"

/**
 * _strlen_recursion - calculates the string length using recursion
 * @s: string to count
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int len = 1;

	if (*s == '\0')
	{
		return (--len);
	}

	return (len + _strlen_recursion(s + 1));
}
