#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @n: the number of strings passed to the function
 * @separator: the string to be printed between the strings
 * Return: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		const char *str = NULL;

		if (str != NULL)
		{
			printf("nil");
		}

		else
		{
		printf("%s", va_arg(args, const char *));
		}

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");


}
