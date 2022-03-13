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

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (i != j && i < j)
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
	putchar('\n');
	return (0);
}



