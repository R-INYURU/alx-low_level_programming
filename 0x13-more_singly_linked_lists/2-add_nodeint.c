#include "lists.h"

/**
 * add_nodeint - add a new node at the begging of listint_t
 * @head: head of the listint_t
 * @n: data to add to new node
 *
 * Return: pointer to listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;

	*head = new;
	return (new);
}
