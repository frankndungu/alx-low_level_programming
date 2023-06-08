#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memmory for an array
 * @nmemb: number of elements
 * @size: bytes of memmory
 * Return: ptr (newly allocated memmory)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0 ; i < nmemb * size ; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}