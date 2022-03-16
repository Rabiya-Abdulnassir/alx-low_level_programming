#include "main.h"

/**
 * _islower - check the code.
 * @c: is an ASCII code
 *
 * Return: 1 if lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


