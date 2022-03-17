#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from
 * 0 to 14 followed by newline
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	j = 0;

	while (j < 10)
	{
		for (i = 48; i < 50; i++)
		{
			for (k = 48; k < 58; k++)
			{
				if (i == 49)
				{
					if (k == 53)
					{
						break;
					}
					else
						_putchar(49);
				}
				_putchar(k);
			}
		}
		_putchar(10);
		j++;
	}
}
