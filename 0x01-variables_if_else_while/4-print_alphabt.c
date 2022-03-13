#include <stdio.h>
/**
 * main - printing alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'q' && ch != 'e')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}

