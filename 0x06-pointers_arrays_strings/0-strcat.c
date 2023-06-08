#include "main.h"

/**
 * _strcat - appends src string to dest string
 * @dest: function parameter
 * @src: function parameter
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
	p++;
	}
	while (*src != '\0')
	{
	*p = *src;
	p++;
	src++;
	}
	*p = '\0';
	return (dest);
}
