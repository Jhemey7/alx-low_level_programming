#include "lists.h"

/**
 * add_dnodeint - adding a new node at the beginning of a list
 * @n: the value of the element
 * @head: the head of the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head)
	{
		new = malloc(sizeof(*new));
		if (new)
		{
			new->n = n;
			new->prev = NULL;
			new->next = *head;

			if (*head)
				(*head)->prev = new;
			*head = new;
		}
	}
	return (new);
}
