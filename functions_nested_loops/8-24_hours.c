#include "main.h"
/**
 * jack_bauer - entry point
 * use _putchar to print every minute and hour
 */
void jack_bauer(void)
{
	int curr_hour = 0;
	int curr_min = 0;
	int final_hour = 23;
	int final_min = 59;

	while (curr_hour <= final_hour)
	{
		curr_min = 0;

		while (curr_min <= final_min)
		{
			_putchar('0' + (curr_hour / 10));
			_putchar('0' + (curr_hour % 10));
			_putchar(':');
			_putchar('0' + (curr_min / 10));
			_putchar('0' + (curr_min % 10));
			_putchar('\n');

			curr_min = curr_min + 1;
		}
		curr_hour = curr_hour + 1;
	}
}
