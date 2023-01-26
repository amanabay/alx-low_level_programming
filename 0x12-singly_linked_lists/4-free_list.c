#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *thead;

	while (head != NULL)
	{
		thead = head->next;
		free(head->str);
		free(head);
		head = thead;
	}
}
