#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list
 * @head: Head node of the linked list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
