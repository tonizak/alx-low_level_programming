#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'A';
for (; alpha <= 90; alpha++)
{
char i = alpha + 32;
putchar(i); /* adding cahr to stdout */
}
for ( ; alpha <=116  ; alpha++)
{
char y = alpha - 26;
putchar(y);
}
putchar('\n');
return (0);
}

