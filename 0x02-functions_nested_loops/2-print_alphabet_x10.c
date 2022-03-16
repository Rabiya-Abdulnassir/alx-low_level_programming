#include "main.h"
/**
 * print_alphabet_x10 - no return value
 *
 * Return: Always 0 (success)
 **/
void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		char  ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
			{
				_putchar(ch);
			}
			_putchar('\n');
		}
}
