#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if ((i > k) || (i == k && j >= l))
						continue;
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);

					if (i == 57 && j == 56 && k == 57)
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);
}
