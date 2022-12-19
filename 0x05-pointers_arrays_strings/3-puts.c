/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */
#include "main.h"
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
