#include <stdio.h>
/**
 * main - Lower case latter i
 * declaration of function - printing_alphabet
 * Return: Always 0 (success)
 */
void print_alphabet(char ch)
{
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	return;
}

int main()
{
	print_alphabet();
		_putchar('\n');
		return (0);
}
