#include <stdio.h>

/**
 *  * *_strncat concatenates one string to another by certain bytes
 *   * @des: first string
 *    * @src: second string
 *     * @n: number of bytes
 *      * Return: address of des
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest [i] != '\0'; i++)
;
for (j=0; j < n && src[j] != 0; j++)
{
	dest[i] = src[j];
	i++;
}
dest[i] = '\0';
return (dest);
}
