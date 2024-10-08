#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at given position
 * @h: head node of the list
 * @idx: idx to place our new node
 * @n: data for the new node
 *
 * Return: address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ins_node = NULL;
	dlistint_t *cp_node = *h;
	unsigned int idx_node = 0;

	if (idx == 0)
	{
		ins_node = add_dnodeint(h, n);
		return (ins_node);
	}

	while (idx_node < (idx - 1))
	{
		if (cp_node == NULL || cp_node->next == NULL)
			return (NULL);
		cp_node = cp_node->next;
		idx_node++;
	}
	ins_node = malloc(sizeof(dlistint_t));
	if (ins_node == NULL)
		return (NULL);

	ins_node->n = n;
	ins_node->next = cp_node->next;
	ins_node->prev = cp_node;
	if (cp_node->next == NULL)
		cp_node->next->prev = ins_node;
	cp_node->next = ins_node;

	return (ins_node);
}
