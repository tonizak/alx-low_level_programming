#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks wether the argument is uppercase or not
 * @c: argument thats passed from main to be checked
 * Return: 1 if uppercase 0 if lowercase
 */
int _isalpha(int c)
{
if (c > 'A' && c < 'Z')
return (1);
return (0);
}
