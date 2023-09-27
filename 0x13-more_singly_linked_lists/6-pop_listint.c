#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element
 * Return:data inside the elements that was deleted or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int nm;

	if (!head || !*head)
		return (0);

	nm = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nm);
}

