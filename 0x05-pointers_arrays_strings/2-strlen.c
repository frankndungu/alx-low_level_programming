#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: function parameter input
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
