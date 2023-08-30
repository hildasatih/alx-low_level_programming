#include "lists.h"

/**
 * sum_listint - it calculates the sum of all data in a listint_t list
 * @head: pointer to the 1st node of a linked list
 *
 * Return: returns the sum outcome
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempNode = head;

	while (tempNode)
	{
		sum += tempNode->n;
		tempNode = tempNode->next;
	}

	return (sum);
}
