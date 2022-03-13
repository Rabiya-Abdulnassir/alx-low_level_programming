#include <stdio.h>
/**
 * main - Hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
int i;

for (i = 0 ; i <= 9 ; i++)
{
        putchar(i);
}
for (ch = 'a' ; ch <= 'f' ; ch++)
{
        putchar(ch);
}
putchar('\n');
return (0);
}

