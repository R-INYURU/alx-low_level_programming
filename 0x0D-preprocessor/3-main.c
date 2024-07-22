#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	i = ABS(-98) * 10;
	j = ABS(43) * 10;
	k = ABS(-12) * ABS(-4);
	l = ABS(-34) + ABS(20);
	printf("%d, %d %d %d\n", i, j, k, l);
	return (0);
}
