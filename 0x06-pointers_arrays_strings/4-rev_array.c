#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @m: array
 * @a: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *m, int a)
{
int i;
int t;

for (i = 0; i < a--; i++)
{
t = m[i];
m[i] = m[a];
m[a] = t;
}
}
