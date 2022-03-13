#include <stdio.h>
/**
 * main - Lower and Upper case laters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}

