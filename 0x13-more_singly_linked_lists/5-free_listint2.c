#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list_t list, sets head to NULL
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *thead;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		thead = (*head)->next;
		free(*head);
		*head = thead;
	}
	head = NULL;
}
