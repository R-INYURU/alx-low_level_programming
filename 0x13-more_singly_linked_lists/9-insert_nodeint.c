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
	listint_t *insNode, *new;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	while (count < idx && *head != NULL)
	{
		insNode = head->next;
		if (head == NULL)
		{
			insNode = NULL;
			break;
		}
		*head = insNode;
		count++;
	}

	insNode->next = *head;
	insNode->n = n;
	*head = 
