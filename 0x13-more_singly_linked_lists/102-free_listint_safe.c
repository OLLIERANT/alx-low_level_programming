#include "lits.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - counts the number of unique nodes
 * in a loopped listint_t linked list.
 *
 * @head: the head of the list
 *
 * Return: 0, if the list is not looped,
 * Otherwise the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				nodes++;
				tortoise = tortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}
	return (0);
}

/**
 * free_listint_safe - frees a list safely
 * (i.e. can free lists containing loops)
 *
 * @h: the pointer to the address of the head
 * of the list
 *
 * Return: the size of the list was freed.
 *
 * Description: the function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}