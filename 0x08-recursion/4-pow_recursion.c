#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @f: value to raise
 * @g: power
 *
 * Return: result of the power
 */
int _pow_recursion(int f, int g)
{
if (g < 0)
return (-1);
if (g == 0)
return (1);
return (f * _pow_recursion(f, g - 1));
}
