#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */

ize_t print_listint(const listint_t *h)
{
sinze_t num_node = 0;

while ( h != NULL)
{
printf("%d \n", h -> n);
num_node += 1   
h = h -> next;
}
return (num_node);
}
