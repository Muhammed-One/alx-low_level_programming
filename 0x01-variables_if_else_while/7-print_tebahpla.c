#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Description: A C program prints lowercase alphabet with putchar function
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
