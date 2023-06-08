#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: function parameter input
 * @b: function parameter input
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
