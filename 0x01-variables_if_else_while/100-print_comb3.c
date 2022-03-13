#include <stdio.h>
/**
 * main - The more brains you use, the less material you need
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '1' ; j <= '9' ; j++)
		{
				putchar(i);
				putchar(j);
				if (i != j)
				{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

