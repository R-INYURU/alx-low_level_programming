#include "main.h"
#include <limits.h>

/**
 * _atoi - convert string to an integer
 * @str: string to convert
 *
 * Return: integer value
 */
int _atoi(char *str)
{
	int i = 0;
	int val = 0, sign = 1;

	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (val > INT_MAX / 10 || (val == INT_MAX / 10 && str[i] - '0' > 7))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		val = val * 10 + str[i++] - '0';
	}
	return (val * sign);
}
