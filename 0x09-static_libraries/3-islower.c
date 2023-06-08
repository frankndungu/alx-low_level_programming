#include "main.h"

/**
 * _islower - cross checks if char is lowercase letters
 * @c: is the char to be checked
 * Return: 1 (Success) else 0 (fail)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
