#include "main.h"

void times_table(void)
{
int i, j;
for (i=0; i <10; i++)
{
for (j=0; j <10; j++)
{
int z = i * j;
if (z > 9)
{
_putchar(z/10 + '0');
_putchar(z%10 + '0');
}
else
_putchar(z + '0');
if (j != 9){
_putchar(',');
_putchar(' ');
}
}
_putchar(36);
_putchar('\n');
}
}
