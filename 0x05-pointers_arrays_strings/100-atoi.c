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
	int count = 0;
	int val = 1;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = 0; i < count; i++)
	{
		if (str[i] == 45)
			val *= -1;
		
	}
}
