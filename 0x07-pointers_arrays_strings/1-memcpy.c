#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n;
if (size > 0)
{
int i;
for (i = 0; i < size; i++)
{
src[i] = dest[i];
}
}
return (dest);
}
