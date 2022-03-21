#include "main.h"
/**
* swap_int - swap the value
*
* @a: pointeer
* @b: pointer
* Return: Always 0
*/

void swap_int(int *a, int *b)
{
*b = 98;
*a = *b;
*b = *a;
 *a = 42;
}

