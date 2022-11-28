#include "lists.h"
#include <stdio.h>

/**
*print_listint - prints all the elements of a listint_t list
*
*@h: pointer to the first node in the linked list
*
*Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%.d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
