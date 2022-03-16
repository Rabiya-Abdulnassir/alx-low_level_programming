#include "main.h"
/**
 * void - printing mintis of the track
 *
 * Return: no value 
 */
void jack_bauer(void)
{
	int minutes_tens, minutes_ones, second_ones, second_tens;

		for (minutes_tens = 1 ; minutes <= 24 ; minutes++)
		{
			for (minutes_ones = 1 ; minutes_ones <= 60 ; minutes_ones++)
			{
				
						
					_putchar((minutes_tens / 10) + '0');
					_putchar((minutes_tens % 10) + '0');
					_putchar(':'); 
					_putchar((minutes_ones / 10) + '0');
					_putchar((minutes_ones % 10)+ '0');
					_putchar('\n');
			}
		}
}
