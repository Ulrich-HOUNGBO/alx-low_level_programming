#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
int start, beg = 0;
int end = n - 1;
while (end > beg)
{
tmp = *(a + beg);
*(a + beg) = *(a + end);
*(a + end) = tmp;
beg++, end--;
}

}
