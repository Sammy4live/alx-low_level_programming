#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to the listint_t list address to be free
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
