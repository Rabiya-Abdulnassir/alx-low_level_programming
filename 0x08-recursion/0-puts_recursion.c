#include "main.h"
/**
* _puts_recursion - print string followed by new line
* @s: pionter
* Return: string
*/

void _puts_recursion(char *s)
{
int i = 0;

if (s[i] != '\0')
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
