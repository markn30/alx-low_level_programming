#include "lists.h"

/**
 * list_len -  a function that returns the number of elements in a linked.
 *
 * @h: parameter for function argument.
 *
 * Return: the number of elements in a linked.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
