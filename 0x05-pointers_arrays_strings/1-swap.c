#include "main.h"

/**
* swap_int - swaps two integers
*
* @a: integer
* @b: integer
*
* Return: Always 0(success)
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
