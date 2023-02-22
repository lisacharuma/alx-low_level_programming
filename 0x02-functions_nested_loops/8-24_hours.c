#include "main.h"

/**
 * jack_bauer - entry point
 * Description: prints minutes
 * Return: void
 */

void jack_bauer(void)
{
	int min = 0;
	int hr = 0;

	for (min = 0; min <= 59; min++)
	{
		_putchar('%02d:%02d', hr, min);
		if (min == 59)
		{
			hr += 1;
		min = 0;

		if (hr == 24)
			break;
		 _putchar('%02d:%02d', hr, min);
		}
	}
}
