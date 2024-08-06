#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: head of node listint_t
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int poped = 0;
	listint_t *popNode;

	if (*head == NULL)
		return (0);
	else
	{
		popNode = *head;
		poped = (*head)->n;
		*head = (*head)->next;
	}
	free(popNode);

	return (poped);
}
