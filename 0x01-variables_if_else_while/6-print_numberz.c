#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: A C program prints numbers (0 - 9) with printf function
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
char ch = '0';
while (ch <= '9')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
