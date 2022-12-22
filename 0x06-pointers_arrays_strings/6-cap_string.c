#include <stdio.h>

/**
 * cap_string - capitalize letter after seperator
 * @a: array passed
 * Return: array
 */
char *cap_string(char *a)
{
int i;
for (i = 0; a[i] != '\0'; i++)
{
switch (a[i])
{
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
case ' ':
case '\n':
case '\t':
if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
a[i + 1] -= 32;
}
}
return (a);
}
