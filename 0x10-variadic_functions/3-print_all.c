#include "variadic_functions.c"
#include <stdio.h>

/**
 * print_all - prints all types of formats
 * to the standard output
 *
 * @format: array of the format
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag;
	char *str;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		flag = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);

				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				flag = 0;
				break;
		}
		if (flag == 1 && format[i + 1])
			printf(", ");
		i++;
	}
	printf("\n");
}
