#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @n: last digit number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last = (n % 10);

	if (n < 0)
	{
		last = -1 * last;
	}
		_putchar('0' + last);
		return (last);
}
