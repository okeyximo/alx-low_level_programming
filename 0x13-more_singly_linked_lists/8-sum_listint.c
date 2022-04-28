#include "lists.h"

/**
 * sum_listint - sums all the data of list
 * @head: the head pointer to the head node
 * Return: sum or 0;
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);

}
