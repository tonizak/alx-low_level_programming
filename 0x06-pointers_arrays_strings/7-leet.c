#include <stdio.h>

/**
 * leet - function that turns vowels into numbs
 * @a: array passed
 * Return: array
 */
char *leet(char *a)
{
int i, y;
char b[] = {"aeotlAEOTL"};
char c[] = { "4307143071"};
for (i = 0; a[i] != '\0'; i++)
{
for (y = 0; b[y] != '\0'; y++)
{
if (a[i] == b[y])
a[i] = c[y];
}
}
return (a);
}
