#include "holberton.h"

/**
 *
 *
 */

void jack_bauer(void)
{
	int f_hour, s_hour, f_minute, s_minute, hour, minute;
	{
		for (hour = 0; hour <= 23; hour++)
		{
			f_hour = hour / 10;
			s_hour = hour % 10;

			for (minute = 0; minute <= 59; minute++)
			{
				f_minute = minute / 10;
				s_minute = minute % 10;

				_putchar(f_hour + '0');
				_putchar(s_hour + '0');
				_putchar(':');
				_putchar(f_minute + '0');
				_putchar(s_minute + '0');
				_putchar('\n');
			}
		}
	}

	return;
}
