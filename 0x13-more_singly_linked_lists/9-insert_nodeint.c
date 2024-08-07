#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head node of linked list
 * @idx: index at which to insert the new node
 * @n: data to insert
 *
 * Return: pointer the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insNode;
	listint_t *copyNode = *head;
	unsigned int count;

	insNode = malloc(sizeof(listint_t));
	if (insNode == NULL)
		return (NULL);
	insNode->n = n;
	if (idx == 0)
	{
		insNode->next = copyNode;
		*head = insNode;
		return (insNode);
	}
	for (count = 0; count < (idx - 1); count++)
	{
		if (copyNode == NULL && copyNode->next == NULL)
			return (NULL);
		copyNode = copyNode->next;
	}
	insNode->next = copyNode->next;
	copyNode->next = insNode;

	return (insNode);
}
