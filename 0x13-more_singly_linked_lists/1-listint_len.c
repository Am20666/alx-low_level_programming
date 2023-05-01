#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 * in a linked listint_t list.
 * @l: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *l)
{
	size_t nodes = 0;

	while (l)
	{
		nodes++;
		l = l->next;
	}

	return (nodes);
}
