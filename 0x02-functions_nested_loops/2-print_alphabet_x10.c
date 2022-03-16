#include "main.h"
/**
 * print_alphabet_x10 - no return value
 *
 * Return: Always 0 (success)
 **/
void print_alphabet_x10(void)
{
        char ch = 'a';
	char CH = 'a';

        for (; ch <= 'z' ; ch++)
        {
		for (CH = 'a'; CH <= 'z' ; CH++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
