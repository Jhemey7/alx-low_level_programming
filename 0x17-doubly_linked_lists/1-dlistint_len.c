#include "lists.h"

/**
 * dlistint_len - printing d no of elements in linked list
 * @h: the pnter
 * Return: the no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	for (; h; h = h->next)
		number++;
	return (number);
}
