#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int count = 0;
	char str[] = *s;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0; count != 0; i++)
	{
		
