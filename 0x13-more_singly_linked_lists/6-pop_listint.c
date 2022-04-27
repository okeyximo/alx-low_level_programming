#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the head data
 * @head: pointer to the head data
 * Return: the head data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (!head || *head)
		return (0);


	n = temp->n;
	*head = temp->next;

	free(temp);
	return (n);
}
