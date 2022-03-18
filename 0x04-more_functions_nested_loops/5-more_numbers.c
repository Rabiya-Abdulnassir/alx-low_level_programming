#include "main.h"
/**
 * more_numbers - print 10 time the number
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;
		int k;

		for (j = '0' ; j <= '14' ; j++)
		{
			k = j;
			if (j > 9)
			{
				_putchar(1 + 48);
                                k = j % 10;
			}
			_putchar(k + 48);
		}
	_putchar('\n');
	}
}
			
