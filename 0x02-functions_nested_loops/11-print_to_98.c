#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - prints until 98
 * @n: start number
 * Return: 0
 */
void print_to_98(int n)
{
while (n < 98)
printf("%d, ", n++);
while (n > 98)
printf("%d, ", n--);
printf("98\n");
}
