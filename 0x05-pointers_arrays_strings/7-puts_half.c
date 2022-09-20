#include "main.h"

/**
* puts_half - check the code.
* @str: an input string.
* Return: nothing.
*/
void puts_half(char *str)
{
int len = 0, i, d;
while (str[len] != '\0')
len++;
if (len % 2 == 0)
d = len / 2;
else
d = (len + 1) / 2;
for (i = d; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
