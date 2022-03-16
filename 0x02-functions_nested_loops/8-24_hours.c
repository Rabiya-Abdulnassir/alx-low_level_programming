#include "main.h"
/**
 * void - printing mintis of the track
 *
 * Return: no value 
 */
void jack_bauer(void)
{
	int minutes, seconds;

		for (minutes = 0 ; minutes <= 30 ; minutes++)
		{
			for (seconds = 0 ; seconds <= 59 ; seconds++)
			{
				if (minutes != 4 && seconds != 59)
				{
					_putchar(minutes);
					_putchar(minutes);
					_putchar(':'); 
					_putchar(seconds);
					_putchar(seconds);
					_putchar('\n');
				}
			}
		}
}
