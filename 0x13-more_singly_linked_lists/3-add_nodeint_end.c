#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end -  adds a new node at the end of a list_t list.
 * @head: head of linked list.
 * @n: data part of node to be inserted.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int data = n;
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *lastnode;

	if (newnode == NULL)
		return (NULL);

	newnode->n = data;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (*head);

}
