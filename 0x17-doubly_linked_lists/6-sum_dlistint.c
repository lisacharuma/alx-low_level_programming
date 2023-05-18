#include "lists.h"

/**
 * sum_dlistint - sums list elements
 * @head: ptr to first list element
 * Return: elements sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
