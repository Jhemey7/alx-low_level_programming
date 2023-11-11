#include "lists.h"

/**
 * print_dlistint - prnting all elemnts of doubly linked list
 * @h: the pnter
 * Return: the num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
