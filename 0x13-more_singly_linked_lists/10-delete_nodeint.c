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
	listint_t *pre = NULL;
	listint_t *curr = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t* temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (curr != NULL)
	{
		if (i == index)
		{
			pre->next = curr->next
			free(curr);
			return (1);
		}
		pre = curr;
		curr = curr->next;
		i++;
	}
	return (-1);
}
