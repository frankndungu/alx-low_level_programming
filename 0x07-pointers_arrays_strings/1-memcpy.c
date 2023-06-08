#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: function param
 * @src: function param
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	char *psrc = src;

	while (n-- > 0)
	{
	*pdest++ = *psrc++;
	}
	return (dest);
}
