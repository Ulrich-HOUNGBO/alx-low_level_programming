#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
int len1 = 0, len2 = 0;
char *concat;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (*(s1 + 1))
{
i++;
len1++;
}
while (*(s2 + j))
{
j++;
len2++;
}
len2++;
concat = malloc(sizeof(char) * (len1 + len2));
if (concat == NULL)
{
return (NULL);
}
i= 0, j= 0;
while (i < len1)
{
*(concat + i) = *(s1 + i);
}
while (i < len1)
{
*(concat + j) = *(s2 + j);
}
return (concat);
}
