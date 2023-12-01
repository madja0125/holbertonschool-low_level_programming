#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer pointing to the list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->prev;
	}
	return (counter);
}
