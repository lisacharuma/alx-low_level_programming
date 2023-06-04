#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given idx
 * @h: ptr to list
 * @idx: index at which item will be inserted
 * @n: value to be inserted
 * Return: new node
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
	new_node->prev = NULL;

	if (*h == NULL) /*Empty list*/
	{
		*h = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	current_node = *h;
	while (current_node != NULL)
	{
		if (count == idx)
		{
			new_node->next = current_node;
			new_node->prev = current_node->prev;
			if (current_node->prev != NULL)
			{
				current_node->prev->next = new_node;
			}
			else
			{
				*h = new_node;
			}
			current_node->prev = new_node;
		}
		current_node = current_node->next;
		count++;
	}
	if (count == idx - 1 && current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
