#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: last digit number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0 )
		last = -1 * (n % 10);
	_putchar('0' + last);
	 return (last);
}
