#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: A C program prints alphabet with putchar function & expect e,q
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'q' || ch == 'e')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
