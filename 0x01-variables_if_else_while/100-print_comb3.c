#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */


int main(void)
{
int ch;
int CH;
for (ch = '0'; ch <= '9'; ch++)
{
for (CH = (ch + 1); CH <= '9'; CH++)
{
putchar(ch);
putchar(CH);

if ((ch != '8' || CH != '9'))
{
putchar(',');
putchar(' ');
}

}
}
putchar('\n');
return (0);
}
