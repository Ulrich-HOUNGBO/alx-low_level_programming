#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
* */
char *_strdup(char *str)
{
int i = 0, len = 0;
char cpy_char; 
if (str == NULL)
{
return (NULL);
}
while(*(str + 1))
{
i++;
len++;
}
len++;
cpy_char = malloc(sizeof(char) * len);
if (cpy_char == NULL)
{
return (NULL);
}
while (i < len)
{
*(cpy_char + 1) = *(str + 1);
i++;
}
return (cpy_char);
}
