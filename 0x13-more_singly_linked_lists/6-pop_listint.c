#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: head of linked list
 * Return: data at the head
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int hdata = (*head)->n;

	if (*head == NULL)
		return (0);

	newnode = *head;
	*head = (*head)->next;

	free(newnode);

	return (hdata);
}
