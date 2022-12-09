#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int y;
for (i = 48; i < 57; i++)
{
for( y = 49; y <= 57; y++)
{
if(i != y && y > i)
{
putchar(i);
putchar(y);
if(i != 56 && y != 58)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
