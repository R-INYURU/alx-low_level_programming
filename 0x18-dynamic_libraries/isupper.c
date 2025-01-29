#include "main.h"

/**
 * _isupper - check the input char is is uppercase
 * @c: inputed character
 *
 * Return: 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
	return (0);
}
