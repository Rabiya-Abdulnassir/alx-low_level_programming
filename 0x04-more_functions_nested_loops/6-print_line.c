#include "main.h"
/**
 * print_line - short distance
 *
 * Return: Always 0
 */

void print_line(int n)
{
	for (n = 0 ; n <= 2 ; n++)
	{
		_putchar('_');
		_putchar('\n');

		if (n < 0)
		{
			_putchar('\n');
		}
	}
}
