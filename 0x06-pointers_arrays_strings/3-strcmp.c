#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 * Return: 15 -15 0
 */
int _strcmp(char *s1, char *s2)
{
int i, number;
for (i = 0; (s1[i] || s2[i]) != '\0'; i++)
{

	if ((s1[i] != s2[i]) && s1 > s2)
		number = 15;
	else if ((s1[i] != s2[i]) && s1 < s2)
		number = -15;
	else if (s1[i] == s2[i])
		number = 0;
}
return (number);
}
