#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code.
 * @a: an input array.
 * @n: an input integer.
 * Return: nothing.
 */
void print_array(int *a, int n)
{
  int i = 0;

  for (; i < n; i++)
    {
      printf("%d", a[i]);
      if (i < n - 1)
	printf(", ");
    }
  putchar('\n');
}
