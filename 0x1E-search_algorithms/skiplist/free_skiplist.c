#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - deallocate a singly linked list
 * @list: pointer to list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
