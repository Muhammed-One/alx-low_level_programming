#include "main.h"

int actual_sqrt_recursion(int d, int u);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @d: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int d)
{
if (d < 0)
return (-1);
return (actual_sqrt_recursion(d, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @d: number to calculate the sqaure root of
 * @u: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int d, int u)
{
if (u * u > d)
return (-1);
if (u * u == d)
return (u);
return (actual_sqrt_recursion(d, u + 1));
}
