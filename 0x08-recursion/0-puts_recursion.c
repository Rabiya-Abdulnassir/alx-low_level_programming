#include "main.h"
/**
* _puts_recursion - print string followed by new line
* @s: pionter
* Return: string
*/

void _puts_recursion(char *s)
{
int i = 0;

_putchar(s[i] + _putsrecursion(i + 1);
i++;
_putchar('\n');
}
