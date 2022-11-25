#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: argument for new list_t node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;

	while (h != NULL)
	{

		if (h->str != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
		printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}

		return (count);
}
