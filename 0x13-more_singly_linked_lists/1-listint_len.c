#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
size_t num_node = 0;
while (h != NULL)
{
num_node += 1;
h = h->next;
}
return (num_node);
}
