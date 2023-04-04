#include "lists.h"

/**
 * add_nodeint - new function
 * Description: Adds new node at the beiginning of a list
 * @head: pointer to a head pointer
 * @n: node value
 * Return: new element address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/**
	 * ALGORITHM
	 * Create new node and allocate memory
	 * If new node is null return NULL
	 * Add value
	 * Point new node's next to previous head
	 * Make new node the head
	 */

	listint_t new_node = malloc(sieof(listint_t));

	if (new_node == NULL)
		return (null);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

