#include "lists.h"

/**
 * free_listint - function name
 * Description: frees a list
 * @head: pointer to the beginning of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *this_node = head;

	while (head != NULL)
	{
		this_node = head;
		head = head->next;
		free(this_node);
	}
}
