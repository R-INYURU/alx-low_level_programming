#include "lists.h"

/**
 * free_listint - free the space used by malloc in creating listint_t
 * @head: head node of listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *some;

	while (head != NULL)
	{
		some  = head->next;
		free(head);
		head = some;
	}
}
