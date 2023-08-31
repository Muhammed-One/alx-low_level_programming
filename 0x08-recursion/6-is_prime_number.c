#include "main.h"

int actual_prime(int w, int t);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @w: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int w)
{
if (w <= 1)
return (0);
return (actual_prime(w, w - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @w: number to evaluate
 * @t: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int w, int t)
{
if (t == 1)
return (1);
if (w % t == 0 && t > 0)
return (0);
return (actual_prime(w, t - 1));
}
