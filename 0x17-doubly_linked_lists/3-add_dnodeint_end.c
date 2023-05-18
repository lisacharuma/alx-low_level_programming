#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of a list
 * @head: ptr to head ptr
 * @n: value to add
 * Return: new element address or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	/*if list is empty, make new node head*/
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/*if list if not empty, traverse to the end*/
		tail = *head;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
		new_node->prev = tail;
	}
	return (new_node);
}
