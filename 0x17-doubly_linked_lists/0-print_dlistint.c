#include "lists.h"

/**
 * print_dlistint - print all elements of a double linked list
 * @h: head of the linked list
 *
 * Return: number of nodes (size_t)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (!h->n)
			printf("nil\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
