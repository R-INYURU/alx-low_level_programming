#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check th code
 *
 * Return: always 0
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint(head);
	return (0);
}
