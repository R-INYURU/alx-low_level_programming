#include "lists.h"
#include <string.h>

/**
 * add_node_end - add elements on the Node at the end
 * @head: head of the Node
 * @str: string to add on Node
 *
 * Return: addres to the new element or NUL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *dup_str;
	unsigned int leng;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (!dup_str)
	{
		free(new);
		return (NULL);
	}
	leng = strlen(str);

	new->str = dup_str;
	new->len = leng;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
