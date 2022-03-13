#include <stdio.h>
/*
 * main - printing numbers
 *
 * Return: ALways 0 (success)
 */

int main(void)
{
	int i;

	for  (i = 0 ; i <= 9 ; i++)
	{
		putchar(int(i));
	}
	putchar('\n');
	return (0);
}
