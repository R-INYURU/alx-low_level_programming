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
	unsigned int node = 0;
	dlistint_t *tmp = head;
	dlistint_t *rtn_node = NULL;

	while (tmp != NULL)
	{
		node++;
		tmp = tmp->next;
		if (node == index)
			rtn_node = tmp;
	}
	return (rtn_node);
}
