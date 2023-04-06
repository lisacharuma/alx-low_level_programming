#include "lists.h"

/**
 * add_node_end - new function
 * Description: adds a node at the end
 * @head: pointer to pointer 2 node
 * @str: string pointer
 * Return: new element address or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int counter = 0;
	list_t *tail_node;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	/* Adding values to the new node. str first*/
	new_node->str = strdup(str); /*duplicate passed str*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*Adding len*/
	while (str[counter])
	{
		counter++;
	}
	new_node->len = counter;
	new_node->next = NULL; /*bcz it's the last node*/

	if (*head == NULL) /*empty list*/
		*head = new_node; /*make the new node the head*/
	else /*find tail node and make it point 2 new node*/
	{
		tail_node = *head;
		while (tail_node->next != NULL)
		{
			tail_node = tail_node->next;
		}
		tail_node->next = new_node; /*old tail 2 new node*/
	}
	return (new_node);
}
