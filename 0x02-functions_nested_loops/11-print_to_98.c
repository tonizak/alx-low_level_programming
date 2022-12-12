#include "main.h"

void print_to_98(int n)
{
if (n < 0)
{
n *= -1;
for(; n <= 98; n++)
{
_putchar(45);
_putchar(n%10 + '0');
_putchar(n/10 + '0');
_putchar(' ');
}
}
else if (n <= 98 && n >= 0)
{
for(; n <= 98; n++)
{
if(n < 10)
_putchar(n + '0');
else if (n == 10)
{
_putchar(n/10 +'0');
_putchar(n%10 + '0');
_putchar(' ');
}
_putchar(n%10 + '0');
_putchar(n/10 + '0');
_putchar(' ');
}
}
for(; n >= 98; n--)
{
_putchar(n%10 + '0');
_putchar(n/10 + '0');
_putchar(' ');
}
}
