#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of string passed to the function
 * @...: tge variable number of string to be printed
 *
 * Description: if separator is NULL, pit is not printed
 * if one of the string is NULL, (nil) is printed instead
 */ 
void print_all(const char * const format, ...)
{
	va_list string;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf ("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}