#include <stdio.h>
/**
 * main - The success combination in business is: Do what you do better... and: do more of what you do..
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '1' ; j <= '9'; j++)
		{
			for (k = '2' ; k <= '9' ; k++)
			{
				if (i != j && j != k && j < k)
				{
				putchar(i);
				putchar(j);
				putchar(k);
				if (k != '9')
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
