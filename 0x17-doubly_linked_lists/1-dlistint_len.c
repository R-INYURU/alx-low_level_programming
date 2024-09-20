#include "lists.h"

/**
 * dlistint_len - return the number of elements in list
 * @h: linked list head pointer
 *
 * Return: size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
