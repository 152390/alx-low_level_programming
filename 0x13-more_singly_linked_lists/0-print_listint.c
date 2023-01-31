#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *cursor = h;
size_t count = 0;

while (h != NULL)
{
printf("%d\n", h->n);
count += 1;
cursor = cursor->next;	
}
return (count);
}

