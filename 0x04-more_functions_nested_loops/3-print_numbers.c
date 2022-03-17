#include "mian.h"
/**
 * print_numbers - number from 0 to 9
 *
 * Return: always none
 */

void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= '9' ;i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
