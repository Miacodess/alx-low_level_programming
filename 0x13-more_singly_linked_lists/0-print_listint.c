#include "lists.h"

/**
 * print_listint - prints the elements of the list
 * @h: head
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t roll = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		roll++;
	}
	return (roll);
}
