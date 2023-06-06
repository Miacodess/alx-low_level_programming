#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: head pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *post;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		post = (*head)->next;
		free(*head);
		*head = post;
	}
}
