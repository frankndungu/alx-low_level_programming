#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: function param
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
