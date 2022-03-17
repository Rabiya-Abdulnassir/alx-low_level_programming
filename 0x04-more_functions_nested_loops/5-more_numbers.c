#include "main.h"
/**
 * more_numbers - print 10 time the number
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		int j;

		for (j = 0 ; j <= 14 ; j++)
		{
			_putchar(j + '0');
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
			
