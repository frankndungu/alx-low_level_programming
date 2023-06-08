#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: function param
 * Return: Always 1 (Success) 0 (fail)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
{
	return (0);
}
}
