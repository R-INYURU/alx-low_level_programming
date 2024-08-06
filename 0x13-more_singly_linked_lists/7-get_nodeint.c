#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list
 * @head: head node of the linked list
 * @index: index number of the node to get
 *
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	for (i = 0; i < index; i++)
	{
		node = head->next;
		head = node;
	}
	return (node);
}