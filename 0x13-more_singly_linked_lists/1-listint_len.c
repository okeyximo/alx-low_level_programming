#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * 
 * @h: the list 
 * Return: the number of elements in linked list 
 */

size_t listint_len(const listint_t *h)
{
    size_t len = 0;

    while (h)
    {
        len++;
        h = h->next;
    }
    return len;

}