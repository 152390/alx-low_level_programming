#include "lists.h"
/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 * Return: Integer
 **/
size_t list_len(const list_t *h)
{
	size_t n_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}

