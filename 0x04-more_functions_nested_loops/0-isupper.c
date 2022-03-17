#include "main.h"
/**
 * _isupper - checkout uppercase
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	for (c = 'A' ; c <= 'Z' ; c++)
	{
		if (_isupper(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		_putchar('\n');
	}
}
