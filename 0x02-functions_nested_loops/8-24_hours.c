#include "main.h"
/**
 * void - printing mintis of the track
 *
 * Return: no value 
 */
void jack_bauer(void)
{
	int minutes_tens, minutes_ones, second_ones, second_tens, minutes_max;

		for (minutes_tens = '0' ; minutes <= 4 ; minutes++)
		{
			for (minutes_ones = 0 ; minutes_ones <= 4 ; minutes_onres++)
			{
				for (second_tens = 0 ; second_tens <= 5 ; second_tens++)
				{
					for (second_ones = 0 ; second_ones <= 9 ; second_ones++)
					{
						if (minute_ones !=4 && secon_tens != 5)
						{
					_putchar(minutes + '0');
					_putchar(minutes + '0');
					_putchar(':'); 
					_putchar(seconds + '0');
					_putchar(seconds + '0');
					_putchar('\n');
						}
					}
				}
			}
		}
}
