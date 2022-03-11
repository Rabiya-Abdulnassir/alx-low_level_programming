#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* main - 
*Return: Always 0 (success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if(n>0)
	{
	printf("%d is %s \n . n"n,"Positive");
	}
	else if(n<0)
	{
	printf("%d is %s \n .n"n,"negative");
	}
	else
	{
	printf("%d is %s \n .n"n,"zero");
	}	
	return (0);
}
