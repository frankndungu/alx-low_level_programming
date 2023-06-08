#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: function parameter
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
