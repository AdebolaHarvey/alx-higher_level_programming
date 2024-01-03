#include "lists.h"

/**
 * check_cycle - Checks if a singly linked list
 * has a cycle.
 * @list: Pointer to the linked list to be checked
 *
 * Return: 1 (list has a cycle), 0 (no cycle).
 */
int check_cycle(listint_t *list)
{
	listint_t *s = list;
	listint_t *f = list;

	if (!list)
		return (0);

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}

	return (0);
}
