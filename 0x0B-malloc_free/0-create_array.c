#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: function param
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;
	return (ptr);
}
