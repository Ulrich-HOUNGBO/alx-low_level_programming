#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h->str == N)
{
printf("[0] (nil)\n")
}
else
{
printf("[%d] (%d)\n", h->len, h->str);
}

}
return (count);
}