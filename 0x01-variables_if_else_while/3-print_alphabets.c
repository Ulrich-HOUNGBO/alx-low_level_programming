#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char CH = 'A';

for (ch = 'a'; ch <= 'z'; ch++) //Write lowercase characters
{
putchar(ch);
}

for (CH = 'A'; CH <= 'Z'; CH++) // write uppercase characters
{
putchar(CH);
}
putchar('\n');
return (0);
}
