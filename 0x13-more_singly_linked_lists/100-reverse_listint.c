#include "lists.h"

/**
 * reverse_listint - it will reverse a linked list
 * @head: A pointer to the 1st node of a linked list
 *
 * Return: A pointer to the 1st node in a new linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode = NULL;
	listint_t *nextNode = NULL;

	while (*head)
	{
		nextNode = (*head)->nextNode;
		(*head)->nextNode = prevNode;
		prevNode = *head;
		*head = nextNode;
	}

	*head = prevNode;

	return (*head);
}
