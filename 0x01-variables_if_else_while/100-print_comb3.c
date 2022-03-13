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
		for (i = '1' ; i <= '9' ; i++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putcar(',');
				putchar(' ');
			}
		
		}
	}
	putchar('\n');
	return (0);
}

