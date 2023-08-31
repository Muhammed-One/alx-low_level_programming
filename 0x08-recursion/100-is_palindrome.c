#include "main.h"

int check_pal(char *e, int i, int len);
int _strlen_recursion(char *e);

/**
 * is_palindrome - checks if a string is a palindrome
 * @e: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *e)
{
if (*e == 0)
return (1);
return (check_pal(e, 0, _strlen_recursion(e)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @e: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *e)
{
if (*e == '\0')
return (0);
return (1 + _strlen_recursion(e + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @e: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *e, int i, int len)
{
if (*(e + i) != *(e + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(e, i + 1, len - 1));
}
