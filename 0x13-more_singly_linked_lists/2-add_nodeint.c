#include "lists.h"

/**
 * add_nodeint - adds new node at beginning of a list
 * @head: head node
 * @n: number of nodes
 * Return: NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *noob_node = (listint_t *)malloc(sizeof(listint_t));

	if (noob_node == NULL)
	{
		return (NULL);
	}
	noob_node->n = n;
	noob_node->next = *head;
	*head = noob_node;

	return (noob_node);
}
