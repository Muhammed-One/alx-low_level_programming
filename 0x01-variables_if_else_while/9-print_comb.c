#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: A C program prints 0, 1, - 9with putchar function
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar(digit + 48);
if (digit != 9)
putchar(',');

digit++;
}
putchar('\n');
return (0);
}
