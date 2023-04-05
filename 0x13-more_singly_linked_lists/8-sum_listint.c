#include "lists.h"

/**
 * sum_listint - Get the sum of all the
 *               data (n) of a listint_t list.
 * @head: First in the head of the listint_t list.
 *
 * Return: If the list is empty - 0. the sum of all the data.
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
