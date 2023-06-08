#include "main.h"

/**
 * _memset - fills a memory with a constant byte
 * @s: pointer to memory
 * @b: const byte
 * @n: unsigned int
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
	*p++ = b;
	}
	return (s);
}
