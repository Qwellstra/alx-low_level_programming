#include "lists.h"

/**
 * print_listint - function toprint elements of a linked list
 * @h: the linked listof type listint_t
 *
 * Return: 0 the numberof nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
