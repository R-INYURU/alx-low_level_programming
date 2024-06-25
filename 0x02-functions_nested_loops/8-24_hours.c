#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int hr;
	int hrs;
	int min;
	int mins;

	for (hr = 0; hr < 3; hr++)
	{
		for (hrs = 0; hrs < 10; hrs++)
		{
			for (min = 0; min < 6; min++)
			{
				for (mins = 0; mins <= 9; mins++)
				{
					if (hr == 2 && hrs >= 4)
						break;
					_putchar(hr + 48);
					_putchar(hrs + 48);
					_putchar(':');
					_putchar(min + 48);
					_putchar(mins + 48);
					_putchar('\n');
				}
			}
		}
	}
}
