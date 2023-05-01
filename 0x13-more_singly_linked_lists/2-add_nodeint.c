#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @l: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 * otherwise the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int l)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->l = l;
	new->next = *head;

	*head = new;

	return (new);
}
