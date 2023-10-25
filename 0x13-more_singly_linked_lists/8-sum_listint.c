#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a linked list
 * @head: Head node of the linked list
 *
 * Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
