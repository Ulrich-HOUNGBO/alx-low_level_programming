#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
char ch = '0';

// Write the Character to stdout
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
   
putchar('\n');
return (0);
}
