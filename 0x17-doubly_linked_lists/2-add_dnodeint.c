#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a dlinked list
 * @head: ptr to head ptr
 * @n: new node value
 * Return: new node address or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	/*point prev of the previous head to new_node*/
	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
