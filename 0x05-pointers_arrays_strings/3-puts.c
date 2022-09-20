#include "main.h"
#include <stdio.h>

/**
* _puts - prints a string
* @str: str pointer
*
* Return: 0
*/
void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}
