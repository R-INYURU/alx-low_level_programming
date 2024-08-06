#include "lists.h"

/**
 * sum_listint - calculate the sum of all data of listint_t linked list
 * @head: head node of the linked list
 *
 * Return: sum of node data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		node = head->next;
		sum += head->n;
		head = node;
	}
	return (sum);
}
