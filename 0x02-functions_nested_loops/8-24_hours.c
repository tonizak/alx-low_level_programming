#include "main.h"

/**
 * jack_bauer - function that prints the time
 * Return: 0 always:
 */
void jack_bauer(void)
{
int a, b;
for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
_putchar(58);
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
_putchar('\n');
}
}
}
