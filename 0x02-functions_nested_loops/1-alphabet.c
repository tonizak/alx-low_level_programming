#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - function that print the alphabet
 *
 * returns nothing
 */
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
_putchar(i);
_putchar('\n');
}
