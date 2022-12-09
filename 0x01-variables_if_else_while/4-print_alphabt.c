#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'A';
for (; alpha <= 90 ; alpha++)
{
if (alpha != 69 && alpha!= 81)
{
char i = alpha + 32;
putchar(i); /* adding cahr to stdout */
}
}
putchar('\n');
return (0);
}
