#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strln!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
