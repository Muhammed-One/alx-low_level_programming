#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @o: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int o)
{
if (o < 0)
return (-1);
if (o == 0)
return (1);
return (o * factorial(o - 1));
}
