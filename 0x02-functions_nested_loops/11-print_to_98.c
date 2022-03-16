#include "main.h"
/**
 * print_to_98 - print all natural numbers 
 *
 * Return: ALways 0
 */
void print_to_98(int n)
{
	if (n < 99)
	{
	for (n = 0 ; n < 99 ; n++)
	{
		_putchar((n / 1) + '0');
		_putchar(',');
	}
	}
	else
	{
	for (n = 111 ; n > 99 ; n--)
	{
		_putchar((n / 1) + '0');
		_putchar(',');
	}
	}
}
