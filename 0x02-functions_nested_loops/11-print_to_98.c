#include "main.h"
/**
 * print_to_98 - print all natural numbers 
 *
 * Return: ALways o
 */
void print_to_98(int n)
{
        int i;
        int j;

        for (i = 0 ; i <= 99 ; i++)
        {
                for (j = 0 ; j <= 99 ; j++)
                {
                        if (i != j && i < j)
                        {
                                putchar((i / 10) + '0');
                                putchar((i % 10) + '0');
                                putchar(' ');
                                putchar((j / 10) + '0');
                                putchar((j % 10) + '0');
                                if (i != 98 || j != 99)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        }

        putchar('\n');
}

