#include <unistd.h>
#include "main.h"

/**
 * _abs - absolute value
 * @x: paramater passed
 * Return: absolute value of x
 */
int _abs(int x)
{
if (x < 0)
{
x = x * -1;
return (x);
}
else
return (x);
}
