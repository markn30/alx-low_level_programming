#include "lists.h"

/**
*listint_len - returns the number of elements in a linked listint_t list.
*
*@h: pointer to first node in the linked list
*
*Return: the number of elements in the list.
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
