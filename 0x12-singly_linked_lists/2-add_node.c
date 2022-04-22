#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: new str to be added at the head
 * Return: NULL on failure or the new address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
