#include "lists.h"
/**
 * print_listint - this prints all the elements in a linked list
 * @h: pointer to linked list of type listint_t
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t no_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_counter++;
		h = h->next;
	}

	return (no_counter);
}
