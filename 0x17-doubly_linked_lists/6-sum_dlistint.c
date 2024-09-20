#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all data in the list
 * @head: head node of the list
 *
 * Return: sum of data or 0 if list empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
