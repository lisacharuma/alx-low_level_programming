#include "lists.h"

/**
 * add_node - new function
 * Description: Adds a node after HEAD
 * @head: pointer to pinter of HEAD
 * @str: pointer to a string
 * Return: new element address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	/**
	 * Adding a new node steps
	 * create a new node and allocate memory 2 it
	 * add data value
	 * point its node ptr to the 4lowing node
	 * make HEAD point to new node
	 */
	list_t *new_node = malloc(sizeof(list_t));

	/*Adding values, string first*/
	new_node->str = strdup(str); /*duplicate str & add 2 str value*/

	if (new_node->str == NULL)
	{/*free memory if str is null*/
		free(new_node);
		return (NULL);
	}
	/*Now count str chars 2 get len*/
	int count = 0; /*counter variable*/

	while (str[count])
	{
		count++;
	}
	new_node->len = count;/*set len to num of chars*/
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}


