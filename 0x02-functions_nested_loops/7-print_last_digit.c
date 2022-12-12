#include "main.h"
#include <stdio.h>
#include <math.h>
int print_last_digit(int x)
{
if (x > 0)
{
x = x % 10;
_putchar(x + '0');
return (x);
}
else 
{
x = x * -1;
x = x % 10;
_putchar(x + '0');
return (x);
}
}
