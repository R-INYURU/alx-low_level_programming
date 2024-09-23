#include "lists.h"

/**
 * delete_dnodeint - delete the head node
 * @head: head node of the lists
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint(dlistint_t **head)
{
	dlistint_t *tmp = *head;

	if (tmp == NULL)
		return (-1);

	(*head) = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free_dlistint(tmp);
	return (1);
}

/**
 * delete_dnodeint_at_end -  delete the node at the end of lists
 * @head: head node of the list
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_end(dlistint_t **head)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (tmp->next == NULL)
	{
		delete_dnodeint(&tmp);
		return (1);
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->prev->next = NULL;
	free_dlistint(tmp);
	return (1);
}

/**
 * delete_dnodeint_at_index - delete a node at index given
 * @head: head node of the lists
 * @index: index of the node to delete
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int cnt = 0;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		/*delete_dnodeint(&tmp);*/
		return (1);
	}

	while (cnt < index)
	{
		tmp = tmp->next;
		if (tmp->next == NULL || tmp == NULL)
			return (-1);
		cnt++;
	}
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	free(tmp);
	return (1);
}
