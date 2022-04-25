#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: double pointer to the head node
 * @n: new data to be added
 * Return: the address of the new element added or NULL
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
