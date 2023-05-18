#include "lists.h"

/**
 * dlistint_len - function that returns list length
 * @h: pointer to head
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
