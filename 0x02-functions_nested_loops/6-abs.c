#include "main.h"

/**
 *  _abs - compute absolute value of integer
 * @n: number to check
 * Return: 1 if greater than 0, 0 if 0, -1 if less than 0
 */
int _abs(int n)
{

if ((n > 0) || (n == 0))
{
return (n);
}
else
{
return(n * -1);
}
}
