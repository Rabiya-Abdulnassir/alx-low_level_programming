#include <stdio.h>
/**
 * main - alphabet order
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = "a";

	for (; ch <= "z"; ch++)
	{
		 putchar(ch);
		 putchar('\n');
	}
	return (0);
}
