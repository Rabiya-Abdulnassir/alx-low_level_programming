#include "main.h"
/**
 * void - printing mintis of the track
 *
 * Return: no value 
 */
void jack_bauer(void)
{
	int minutes_tens, minutes_ones;

		for (minutes_tens = 0 ; minutes_tens < 24 ; minutes_tens++)
		{
			for (minutes_ones = 0 ; minutes_ones < 60 ; minutes_ones++)
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
