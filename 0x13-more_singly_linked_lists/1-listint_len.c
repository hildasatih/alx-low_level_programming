#include "lists.h"
/**
 * listint_len - this return the length of elem of a linked list
 * @h: pointer to linked list of type listint_t
 *
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len_count = 0;

	while (h != NULL)
	{
		h = h->next;
		len_count++;
	}

	return (len_count);
}
