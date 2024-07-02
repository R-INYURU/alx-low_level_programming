#include "main.h"

/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	char *str, *str2, *str3, *str1;

	str = "I do not fear computers, I fear the lack of them - Isaac Asimov";
	str1 = "Holberton!";
	str2 = "";
	str3 = "Best School\\0";

	print_rev(str);
	print_rev(str1);
	print_rev(str2);
	print_rev(str3);

	return (0);
}
