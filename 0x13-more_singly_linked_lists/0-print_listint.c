#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: the head of the list.
 *
 * Return: integer.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
