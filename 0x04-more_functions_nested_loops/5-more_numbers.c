#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * follewd by a new line
 */

void more_numbers(void)
{
	int o, j;

	for (o = 0; o < 10; o++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');

		}
		_putchar('\n')
	}
}
