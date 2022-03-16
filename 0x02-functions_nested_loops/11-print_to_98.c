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
	for (n = 'n' ; n < 99 ; n++)
	{
		_putchar(n);
		_putchar(',');
	}
	}
	else
	{
	for (n = 'n' ; n > 99 ; n--)
	{
		_putchar(n);
		_putchar(',');
	}
	}
}
