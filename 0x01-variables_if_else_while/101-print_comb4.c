#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{

int ch;
int CH;
int AB;
for (ch = '0'; ch <= '9'; ch++)
{
for (CH = (ch + 1); CH <= '9'; CH++)
{
for (AB = (CH + 1); AB <= '9'; AB++)
{
putchar(ch);
putchar(CH);
putchar(AB);

if ((ch != '7' || CH != '8' ||AB != '9'))
{
putchar(',');
putchar(' ');
}
}

}
}
putchar('\n');
return (0);
}
