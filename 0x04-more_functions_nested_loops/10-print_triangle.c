#include "main.h"

/**
 * print_triangle - prints tirangle
 * @size: size of triangle
 * return: always 0
 */
void print_triangle(int size)
{
int i, j, z;
if (size <= 0)
_putchar('\n');
for (z = size; z > 0; z--)
{
for (i = 1; i < z ; i++)
{
_putchar(' ');
}
for (j = size - i; j >= 0; j--)
{
_putchar(35);
}
_putchar('\n');
}
}
