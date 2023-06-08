#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: function param
 * @s2: function param
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
	if (s1[i] == '\0')
	return (0);
	i++;
	}
	return (s1[i] - s2[i]);
}
