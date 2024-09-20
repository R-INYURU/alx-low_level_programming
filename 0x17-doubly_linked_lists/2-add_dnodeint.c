#include "lists.h"

/**
 * add_dnodeint - add a new node to the beginning of a list
 * @head: head of the list
 * @n: number to add on the list
 *
 * Return: address to the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	(*head) = new;
	return (new);
}
