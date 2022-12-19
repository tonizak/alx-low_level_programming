/**
 * swap_int - swap two integers with each other
 * *a@ pointer to first int
 * *b@ pointer to second int
 * return: always 0
 */

void swap_int(int *a, int *b)
{
int temp;
temp= *a;
*a = *b;
*b = temp;
}
