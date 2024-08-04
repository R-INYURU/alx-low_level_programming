#include "lists.h"
#include <string.h>

/**
 * add_node - add new node to the begging of a list_t
 * @head: head of the list_t
 * @str: string to add in the list_t
 *
 * Return: address of the newly added element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	char *str_dup;
	unsigned int leng = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	str_dup = strdup(str);
	if (!str_dup)
	{
		free(new);
		return (NULL);
	}
	leng = strlen(str);
	new->next = *head;
	new->len = leng;
	new->str = str_dup;

	*head = new;
	return (new);
}
