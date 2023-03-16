#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position.
 * @head: head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *chead = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < (index - 1) ; index--)
	{
		if (chead == NULL)
			return (-1);
		chead = chead->next;
	}

	if (chead == *head)
	{
		*head = chead->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		chead->prev->next = chead->next;
		if (chead->next != NULL)
			chead->next->prev = chead->prev;
	}

	free(chead);
	return (1);
}
