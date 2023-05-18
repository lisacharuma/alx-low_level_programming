#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given idx
 * @h: ptr to list
 * @idx: index at which item will be inserted
 * @n: value to be inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;
	dlistint_t *current_node;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
}
