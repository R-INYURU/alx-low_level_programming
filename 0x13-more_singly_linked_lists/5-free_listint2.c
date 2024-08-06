#include "lists.h"

/**
 * free_listint2 - func that frees listint_t
 * @head: head of the list node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
}
