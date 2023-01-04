#include "main.h"

/**
 * _puts_recursion - print string through recursion
 * @s: string sent
 * Return: always 0
 */
void _puts_recursion(char *s)
{
if(*s == '\0')
_putchar('\n');
if(*s != '\0' && *s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
