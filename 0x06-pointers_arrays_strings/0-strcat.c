#include <stdio.h>

/**
 * *_strcat - function that concatentates 2 strings
 * @dest: first string
 * @src: secpnd string
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
