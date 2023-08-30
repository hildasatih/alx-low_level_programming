#include "lists.h"
/**
 * pop_listint - used to delete the head node in  a linked list
 * @head: A pointer to the 1st node in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if it an empty list
 */
int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int node_counter;

	if (!head || !*head)
		return (0);

	node_counter = (*head)->n;
	tempNode = (*head)->next;
	free(*head);
	*head = tempNode;

	return (node_counter);
}
