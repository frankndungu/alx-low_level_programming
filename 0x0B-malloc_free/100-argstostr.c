#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenate all the arguments
 * @ac: function param
 * @av: function param
 * Return: A string containing all arguments each followed by a new line
 */
char *argstostr(int ac, char **av)
{
	int i, j, pos = 0, len = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	len++;
	}

	len += ac;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	ptr[pos] = av[i][j];
	pos++;
	}
	if (ptr[pos] == '\0')
	{
	ptr[pos++] = '\n';
	}
	}
	return (ptr);
}
