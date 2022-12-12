#include <unistd.h>
#include "main.h"

/**
 * print_sign - checks wether a number is +ve -ve or 0
 *
 * @n: argument passed
 *
 * Return: + - 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
_putchar(48);
return (0);
}
