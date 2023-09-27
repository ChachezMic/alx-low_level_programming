#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nm = 0;

	if (h == NULL)
		return (0);

	for (nm = 0; h != NULL; nm++)
	{
		printf("%d\n", h->n);

		h = h->next;
	}

	return (nm);
}
