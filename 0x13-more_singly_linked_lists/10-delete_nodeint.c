#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: index of node to delete
 *
 * Return: pointer to node index
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *pre, *curr;

	*pre = NULL;
	*curr = *head;

	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}

	for (i = 0; curr != NULL && i < index; i++)
	{
		pre = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);

	pre->next = curr->next;
	free(curr);
	return (1);
}
