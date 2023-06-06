#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given position
 * @head: pointer to head node
 * @idx: index to insert
 * @n: new node value
 *
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *perm;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;

		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	perm = malloc(sizeof(listint_t));
	if (perm == NULL)
		return (NULL);
	perm->n = n;

	if (idx == 0)
	{
		perm->next = *head;
		*head = perm;
		return (perm);
	}
	perm->next = temp->next;
	temp->next = perm;
	return (perm);
}
