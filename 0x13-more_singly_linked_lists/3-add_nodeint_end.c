#include "lists.h"
/**
 * add_nodeint_end - add new node at end of list
 * @head: head pointer
 * @n: new element to add
 * Return: NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ls_node = (listint_t *)malloc(sizeof(listint_t));

	if (ls_node == NULL)
	{
		return (NULL);
	}
	ls_node->n = n;
	ls_node->next = NULL;

	if (*head == NULL)
	{
		*head = ls_node;
	}
	else
	{
		listint_t *present = *head;

		while (present->next != NULL)
		{
			present = present->next;
		}
		present->next = ls_node;
	}
	return (ls_node);
}
