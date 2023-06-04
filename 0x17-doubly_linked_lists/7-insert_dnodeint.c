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
		if (idx == 0)
		{
			*h = new_node;
			return (new_node);
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	current_node = *h;
	while (current_node != NULL && count < idx - 1)
	{
		current_node = current_node->next;
		count++;
	}
	if (current_node == NULL) /*idx out of range*/
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	new_node->prev = current_node;
	if (current_node->next != NULL)
		current_node->next->prev = new_node;
	current_node->next = new_node;
	return (new_node);
}
