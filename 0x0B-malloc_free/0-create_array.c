#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
int i = 0;
char *arr;
if(size <= 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
while (i < (int)size, i++)
{
*(arr + i) = c;
}
return (arr);
}
