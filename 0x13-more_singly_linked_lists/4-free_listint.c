#include "lists.h"
/**
 * free_listint - this is used to free a linked list
 * @head: points to the listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *tempNode;

	while (head)
	{
		tempNode = head->next;
		free(head);
		head = tempNode;
	}
}
