#include "main.h"

/**
 * factorial - factorial of a number
 * @n: function parameter
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
