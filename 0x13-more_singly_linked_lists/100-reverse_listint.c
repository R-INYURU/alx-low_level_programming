#include "lists.h"

/**
 * reverse_listint - reverse listint in a linked list
 * @head: head node
 *
 * Return: pointer to reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *new;

	ptr = NULL;
	new = NULL;
	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = new;
	}
	*head = ptr;
	return (*head);
}
