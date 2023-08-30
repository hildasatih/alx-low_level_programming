#include "lists.h"

/**
 * add_nodeint - this  adds a new node at the beginning of a linked list
 * @head: this is a pointer which points the 1st node in a linked list
 * @n: the data to be inserted  in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode_elem;

	newNode_elem = malloc(sizeof(listint_t));
	if (newNode_elem == NULL)
		return (NULL);

	newNode_elem->n = n;
	newNode_elem->next = *head;
	*head = newNode_elem;

	return (newNode_elem);
}
