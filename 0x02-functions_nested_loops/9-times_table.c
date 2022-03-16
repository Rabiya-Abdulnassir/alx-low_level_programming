#include "main.h"
/**
 * time_table - print the 9 time tabel
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			k = (i * j);

			if (j == 0)
			{
				_putchar('0');
			}
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}




