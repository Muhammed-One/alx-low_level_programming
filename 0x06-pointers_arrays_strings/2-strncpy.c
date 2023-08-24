#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @g: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int g)
{
int j;

j = 0;
while (j < g && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < g)
{
dest[j] = '\0';
j++;
}

return (dest);
}
