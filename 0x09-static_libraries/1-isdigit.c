#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @HAMO: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int HAMO)
{
if (HAMO >= '0' && HAMO <= '9')
return (1);
else
return (0);
}
