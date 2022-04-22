#include "lists.h"

/**
 * list_len - returns the number of elements linked list_t
 * @h: node pointer to the list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
