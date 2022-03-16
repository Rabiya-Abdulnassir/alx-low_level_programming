#include "main.h"
/**
 * print_alphabet_x10 - no return value
 *
 * Return: Always 0 (success)
 **/
void print_alphabet_x10(void)
{
        char ch = 'a';

        for (; ch <= 'z' ; ch++)
        {
		for (; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}

}
