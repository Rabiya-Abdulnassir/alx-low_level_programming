#include "main.h"
/**
 * print_to_98 - print all natural numbers 
 *
 * Return: ALways o
 */
void print_to_98(int n)
{
	if (n < 98)
	{
	for (n = n ; n < 99 ; n++)
	{
		_putchar(n + '0');
		_putchar(',');
	}
	}
	else
	{
	for (n = n ; n > 99 ; n--)
	{
		_putchar(n + '0');
		_putchar(',');
	}
	}
	_putchar(98 + '0');
}
