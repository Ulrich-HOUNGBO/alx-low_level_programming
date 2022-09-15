#include "main.h"
/**
 *more_numbers - prints numbers to 14
 *
 *Return: returns nothing
 */

void more_numbers(void)
{
    char ch, i;
    for (i = 0; i <= 9; i++)
    {
        for (ch = '0'; ch <= '14'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
    }
}
