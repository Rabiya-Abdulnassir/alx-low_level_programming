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
int *temp = *a;
*a = *b;
*b = *temp;
}
