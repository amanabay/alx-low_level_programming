#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list_t list.
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *thead;

	while (head != NULL)
	{
		thead = head->next;
		free(head);
		head = thead;
	}
}
