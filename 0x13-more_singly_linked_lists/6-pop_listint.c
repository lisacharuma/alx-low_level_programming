#include "lists.h"

/**
 * pop_listint - new function
 * Description: Deletes list head node
 * @head: pointer to pointer to head
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head; /*temp node to store head data*/
	int head_val; /*value stored in head*/

	if (*head == NULL)
		return (0); /*Return 0 if list is empty*/
	head_val = temp->n; /*value in temp is stored in head_val*/
	*head = (*head)->next; /*make next node new head node*/
	free(temp); /*delete node*/
	return (head_val);
}
