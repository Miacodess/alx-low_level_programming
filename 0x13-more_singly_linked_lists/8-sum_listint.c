#include "lists.h"
/**
 * sum_listint - sum of data in a list
 * @head: pointer to head node
 * Return: 0
 */

int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
