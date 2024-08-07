#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node a index in listint_t linked list
 * @head: head node of linked list
 * @index: index of the node to delete
 *
 * Return: 1 on sucess or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delNode = *head;
	listint_t *tmpNode;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(delNode);
		return (1);
	}
	for (count = 0; count < (index - 1); count++)
	{
		if (delNode->next == NULL)
			return (-1);
		delNode = delNode->next;
	}
	tmpNode = delNode->next;
	delNode->next = tmpNode->next;
	free(tmpNode);

	return (1);
}
