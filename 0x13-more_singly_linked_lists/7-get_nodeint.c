#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first node
 * @index: the index of the node
 * Return: nth node of the linked list or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	if (temp && n < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
