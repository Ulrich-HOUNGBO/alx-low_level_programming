#include "main.h"
#include <stdio.h>
/**
 *print_numbers - function that print all numbers from
 *0 to 9
 *
 *Return: returns nothing
 */

void print_numbers(void)
{
char i;
for (i = '0' ; i <= '9' ; i++)
{
_putchar(i);
}
_putchar('\n');
}