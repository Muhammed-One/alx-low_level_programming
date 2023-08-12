#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Description: A C program that prints with n function
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 15;
if (digit > 5)
printf("%d and is greater than 5\n", digit);
else if (digit == 0)
printf("%d and is 0\n", digit);
else
printf("%d and is less than 6 and not 0\n", digit);
return (0);
}
