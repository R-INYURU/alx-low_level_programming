#include "lists.h"

/**
 * get_dnodeint_at_index - get the number of nth node in list
 * @head: head node of the list
 * @index: index to get the number from
 *
 * Return: return the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx_node = 0;

	while (idx_node < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		idx_node++;
	}
	return (head);
}
