#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_last_digit - prints last digit
 * @x: number that we want to get last number of
 * Return: last number
 */
int print_last_digit(int x)
{
if (x >= 0)
{
x = x % 10;
_putchar(x + '0');
return (x);
}
else if ( x < 0)
{
x = x * -1;
x = x % 10;
_putchar(x + '0');
return (x);
}
return (0);
}
