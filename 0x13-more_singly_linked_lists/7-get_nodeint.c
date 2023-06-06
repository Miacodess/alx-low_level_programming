#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: pointer to head node
 * @index: index of node
 * Return: index pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *present = head;

	while (present != NULL && index > 0)
	{
		present = present->next;
		index--;
	}
	return (present);
}
