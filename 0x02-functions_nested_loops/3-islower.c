#include <unistd.h>
#include "main.h"

/**
 * _islower - checks if theresa  capital or a small leter
 *
 * @c:  checks the argument passed from main
 *
 * Return: 1 if ture 0 if false
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
