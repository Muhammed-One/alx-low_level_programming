#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int b, o, l, next, sum;

b = 1;
o = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (o < 4000000 && (o % 2) == 0)
{
sum = sum + o;
}
next = o + b;
o = l;
l = next;
}

printf("%lu\n", sum);

return (0);
}
