#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: the head of the list.
 *
 * Return: integer.
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
