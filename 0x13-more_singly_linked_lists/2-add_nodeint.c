#include "lists.h"
#include <string.h>
/**
 * add_nodeint -  adds a new node at the beginning of a list_t list.
 * @head: head of linked list.
 * @n: data part of node to be added
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int data = n;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = data;

	newnode->next = *head;
	*head = newnode;

	return (*head);

}
