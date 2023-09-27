#include "lists.h"
#include <stdio.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * else no. of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *c, *r;
	size_t nds = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	c = head->next;
	r = (head->next)->next;

	while (r)
	{
		if (c == r)
		{
			c = head;
			while (c != r)
			{
				nds++;
				c = c->next;
				r = r->next;
			}

			c = c->next;
			while (c != r)
			{
				nds++;
				c = c->next;
			}

			return (nds);
		}

		c = c->next;
		r = (r->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The no. of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nds, index = 0;

	nds = looped_listint_len(head);

	if (nds == 0)
	{
		for (; head != NULL; nds++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nds; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nds);
}

