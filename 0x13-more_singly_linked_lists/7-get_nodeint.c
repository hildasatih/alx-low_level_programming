#include "lists.h"

/**
 * get_nodeint_at_index - At an index in a linked list will return a node
 * @head: pointer to the 1st node of a linked list
 * @index: index of the node to return
 *
 * Return: pointer to a node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tempNode = head;

	while (tempNode && x < index)
	{
		tempNode = tempNode->next;
		x++;
	}
	if (tempNode)
	{
		return (tempNode);
	}
	else
	{
		return (NULL);
	}
}
