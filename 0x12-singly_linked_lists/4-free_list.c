#include "lists.h"

/**
 * free_list - frees the memory from list
 * @head: head node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *rand;

	while (head != NULL)
	{
		rand = head->next;
		free(head->str);
		free(head);
		head = rand;
	}
}
