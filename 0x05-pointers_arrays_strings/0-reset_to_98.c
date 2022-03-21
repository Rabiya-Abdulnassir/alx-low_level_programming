#include "main.h"
/**
* reset_to_98 - update the value 
* @p: pointer
* Return: ALways 0
*/

void reset_to_98(int *n)
{
int p;
n = &p;
printf("value of 'n': %d\n",n);
ptintf("Address of 'n': %P\n",&p);
printf("value of 'p': %P\n",p);
*n = 402;
 printf("value of 'n': %d\n",n);
}
