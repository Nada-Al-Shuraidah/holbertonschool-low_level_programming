#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 */
void jack_bauer(void)
{
int hour, minute;

/* Loop through hours 00 to 23 */
for (hour = 0; hour < 24; hour++)
{
/* Loop through minutes 00 to 59 */
for (minute = 0; minute < 60; minute++)
{
/* Print the time in the format HH:MM */
_putchar((hour / 10) + '0');  /* Print tens place of hour */
_putchar((hour % 10) + '0');  /* Print ones place of hour */
_putchar(':');
_putchar((minute / 10) + '0');  /* Print tens place of minute */
_putchar((minute % 10) + '0');  /* Print ones place of minute */
_putchar('\n');
}
}
}
