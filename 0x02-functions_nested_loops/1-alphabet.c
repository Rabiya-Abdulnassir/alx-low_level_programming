#include "main.h"
/**
 * print_alphabet - no return value
 *
 * Return: Always 0 (success)
 **/
void print_alphabet(void)
{
	char ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
