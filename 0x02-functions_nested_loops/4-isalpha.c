#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: is the char to be checked
 * Return: 1 (Success) else 0 (fail)
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
