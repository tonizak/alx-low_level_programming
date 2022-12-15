#include "main.h"

/**
 * _isupper - Checks for uppercase characters.
 *
 * @c: argument passed
 * Return: 1 success 0 fail
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
