#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter OR 0 if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
