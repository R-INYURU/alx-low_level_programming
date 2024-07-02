#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int count = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (i = 0, j = count; i <= j; i++, j++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	s[count++] = '\0';
}
