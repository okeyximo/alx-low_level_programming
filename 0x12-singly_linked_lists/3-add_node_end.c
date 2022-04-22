#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head pointer
 * @str: str passed
 * Return: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	unsigned int len = 0;
	list_t *new;


	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = NULL;

	if (!(*head))
	{
		(*head) = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
