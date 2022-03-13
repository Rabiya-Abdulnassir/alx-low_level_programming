#include <stdio.h>
/**
 * main - Software is eating the World
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int r;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			for (k = '0' ; k <= '9' ; k++)
			{
				for (r = '1' ; r <= '9' ;)
				{
					if (i != j && j != k && j != r && k != r)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(r);
						if (i != '9')
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}



