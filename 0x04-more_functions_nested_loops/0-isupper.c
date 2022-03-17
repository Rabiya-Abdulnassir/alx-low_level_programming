#include "main.h"
/**
 * _isupper - check uppercase character
 *
 * Return: Alway 0
 */
int _isupper(int c)
{
	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (_isupper(c))
		{
			return (1)
		}
		else
		{
			return (0);
		}
	}
}
