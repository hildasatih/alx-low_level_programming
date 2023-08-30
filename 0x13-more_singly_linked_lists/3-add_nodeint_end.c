#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list
 * @head: pointer to the 1st element of a linked list
 * @n: inserted data in the new element
 *
 * Return: pointer to a new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempNode = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = NULL;
	}

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempNode->next)
	{
		tempNode = tempNode->next;
	}

	tempNode->next = newNode;

	return (newNode);
}

