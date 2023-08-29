#include "lists.h"

/**
 * listint_len - a function that returns the no. of elements in a linked lists
 * @h: the linked list to traverse
 *
 * Return: 0 for the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
