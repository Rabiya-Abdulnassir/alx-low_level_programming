#include "main.h"
/**
 * _isalpha - is print alphabet
 *
 * @c: ASIIC code
 *
 * Return: 1 is letter, lowercase or upper
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
