#include "lists.h"

/**
 * dlistint_t *add_dnodeint_end - adding a new node at d end of a list
 * @head: d head pnter
 * @n: value of d element
 * Return: d address of new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	end = *head;

	if (end != NULL)
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = end;

	return (new);
}
