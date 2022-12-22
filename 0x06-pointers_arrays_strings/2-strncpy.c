#include <stdio.h>

/**
 * *_strncpy - copy one string to another by certain bytes
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: address
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest [i] = '\0';
i++;
}
return (dest);
}
