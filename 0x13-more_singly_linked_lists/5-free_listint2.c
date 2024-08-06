#include "lists.h"

/**
 * free_listint2 - func that frees listint_t
 * @head: head of the list node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *node2;

	while (*head != NULL)
	{
		node = (*head)->next;
		while (node != NULL)
		{
			node2 = node->next;
			free(node);
			node = node2;
		}
		free(*head);
		*head = node;
	}
}
