#include "lists.h"

/**
 * list_len - count number of elements linked
 * @h: head of the link
 *
 * Return: number of elements counted
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
