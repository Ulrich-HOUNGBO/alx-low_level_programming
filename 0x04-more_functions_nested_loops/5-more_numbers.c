#include "main.h"
/**
 *more_numbers - prints numbers to 14
 *
 *Return: returns nothing
 */

void more_numbers(void)
{
char i;
int counter;

for (counter = 1; counter <= 10; counter++)
{
for (i = 0; i <= 14; i++)
{
if (i / 10 > 0)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
