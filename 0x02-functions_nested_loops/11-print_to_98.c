#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers 
 *
 * Return: ALways 0
 */
void print_to_98(int n)
{
	if (n < 99)
	{
	for (n = n ; n < 99 ; n++)
	{
	         printf("%d", n);
		 printf("\n");
	}
	}
	else
	{
	for (n = n ; n > 99 ; n--)
	{
		printf("%d",n);
		pritf("\n");
	}
	}
}
