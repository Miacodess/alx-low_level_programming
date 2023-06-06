#include "lists.h"
/**
 * free_listint - free a linked list
 * @head: pointer to head node
 * Return: NULLif failed
 */

void free_listint(listint_t *head)
{
	listint_t *post;

	while (head != NULL)
	{
		post = head->next;
		free(head);
		head = post;
	}
}
