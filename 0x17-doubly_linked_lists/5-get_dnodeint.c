#include "lists.h"

/**
 * dlistint_t *get_dnodeint_at_index - returns the nth node of a linked list
 * @head: the head of the list
 * @index: the nth node
 * Return: NULL if the node does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int d;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	d = 0;

	while (head != NULL)
	{
		if (d == index)
			break;
		head = head->next;
		d++;
	}

	return (head);
}
