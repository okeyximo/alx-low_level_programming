#include "lists.h"

/**
 * print_listint -  prints the elements of a list_t list
 * @h: the listint_t list to be printed
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
