#include "lists.h"

/**
 * free_dlistint - freeing a dlistint_t list.
 * @head: d pnter
 * Return: ntn
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
