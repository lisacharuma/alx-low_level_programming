#include "lists.h"

/**
 * print_list - new function
 * Description: prints all the elements of a list_t list
 * @h: pointer to a node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h) /* takes pointer to a node as arg*/
{
	int counter = 0; /*counts nodes*/

	while (h != NULL) /*as long as h isnt list terminator*/
	{/*check node strings*/
		if (h->str == NULL) /*the given str is NULL*/
			printf("[0] (nil)\n");
		else
			printf("[%i] %s \n", h->len, h->str);
		h = h->next; /*Move 2 th nxt node*/
		counter++; /*increment counter by 1*/
	}
	return (counter);
}
