#include "lists.h"

/**
 * sum_listint - new function
 * Description: Sums nodes values
 * @head: pointer to the first list element
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /*keeps track of sum*/

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n; /*add node val 2 sum*/
		head = head->next; /*move to next node*/
	}
	return (sum);
}
