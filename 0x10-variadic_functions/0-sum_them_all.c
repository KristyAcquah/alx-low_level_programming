#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum if all its parameters
 * @n: the number of parameter passed to the function
 * @...: a variable number of parameter to calculate the sum
 * Return: if n == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
