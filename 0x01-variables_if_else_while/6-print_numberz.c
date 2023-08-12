#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: A C program prints numbers (0 - 9) with putchar function
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + '0');
digit++;
}
putchar('\n');
return (0);
}
