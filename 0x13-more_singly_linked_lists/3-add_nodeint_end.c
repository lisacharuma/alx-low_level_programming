#include "lists.h"

/**
 * add_nodeint_end - new function
 * Description: adds a new node at the end
 * @head: pointer to header pointer
 * @n: value to add
 * Return: new element address or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/**
	* ALGORITHM
	* Create a new node and allocate memory
	* If new node is null return NULL
	* Add new node's value
	* Point new node's next to NULL because its the last
	* If head is NULL (empty list) make new node head
	* Otherwise, make last tail point to new node
	*/
	listint_t *tail_node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail_node = *head;
		while (tail_node->next != NULL)
		{
			tail_node = tail_node->next;
		}
		tail_node->next = new_node;
	}
	return (new_node);
}
