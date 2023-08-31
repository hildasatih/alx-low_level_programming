#include "lists.h"
/**
 * delete_nodeint_at_index - will delete a node of a linked list at an index
 * @head: A pointer to the 1st node in a linked list
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempNode = *head;
	listint_t *currentNode = NULL;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}

	while (x < index - 1)
	{
		if (!tempNode || !(tempNode->next))
			return (-1);
		tempNode = tempNode->next;
		x++;
	}


	currentNode = tempNode->next;
	tempNode->next = currentNode->next;
	free(currentNode);

	return (1);
}

