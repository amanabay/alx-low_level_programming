#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at a given position.
 * @head: head of the linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newnode, *chead = *head;
	unsigned int i;

	if (chead == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = (*head)->next;
		free(chead);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (chead->next == NULL)
			return (-1);

		chead = chead->next;
	}

	newnode = chead->next;
	chead->next = newnode->next;
	free(newnode);

	return (1);
}
