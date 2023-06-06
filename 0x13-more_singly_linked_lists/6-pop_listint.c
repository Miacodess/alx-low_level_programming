#include "lists.h"
/**
 * pop_listint - delete head node of a list
 * @head: pointer to head node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *begin;
	int i;

	if (head == NULL || *head == NULL)
		return (0);

	begin = *head;
	*head = begin->next;
	i = begin->n;
	free(begin);
	return (i);
}
