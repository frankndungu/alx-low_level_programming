#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location
 * @str: function parameter
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	char *mem;
	int i, j = 0;

	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

	mem = malloc(sizeof(char) * (i + 1));
	if (mem == NULL)
	return (NULL);
	for (j = 0; str[j]; j++)
	mem[j] = str[j];
	return (mem);
}
