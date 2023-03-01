#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the number of element in a linked list
 * @h: the list to check from
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
			h = h->next;
	}
	return (counter);
}
