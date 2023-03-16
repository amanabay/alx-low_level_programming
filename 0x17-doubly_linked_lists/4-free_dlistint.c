#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *thead;

	while (head)
	{
		thead = head->next;
		free(head);
		head = thead;
	}
}
