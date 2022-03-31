#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to y.
 * @x: base
 * @y: The power
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
