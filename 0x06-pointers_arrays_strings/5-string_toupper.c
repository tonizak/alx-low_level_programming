#include <stdio.h>

/**
 * *string_toupper - turns lower to upper
 * @a: paramter to be checked
 *Return: upper char
 */
char *string_toupper(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
	a[i] = a[i] - 32;
}
return (a);
}
