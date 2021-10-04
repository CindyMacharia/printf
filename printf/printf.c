#include "main.h"
#include "funcs_array.h"
/**
 * _printf - prints to stdout according to a format string
 * @format: constant string containing zero or more directives
 * Return: int number of characters printed (excluding terminating null-byte)
 */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list ap;

	man 3 va_start(ap, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)

	if (format == NULL)
		return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
@@ -40,8 +44,6 @@ int _printf(const char *format, ...)
			break;
		}
	}
	if (format == NULL)
		return (-1);
	man 3 va_end(ap);
	return (count);
}
