#include "main.h"
/**
* reset_to_98 - update the value 
* @p: pointer
* Return: ALways 0
*/

void reset_to_98(int *n)
{
int p = 402;
n = &p;
_putchar(n);
_putchar(&p);
_putchar(p + '0');
*n = 98;
 _putchar(n);
}
