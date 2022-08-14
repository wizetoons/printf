#include "main.h"

/**
 * _printf - prints to stdout
 * @format: string to print
 *
 * Return: nunber of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int count = 0;
	const void *buf;

	if (format == NULL)
	{
		return (0);
	}
	else
	{
		va_start(ap, format);
		for (i = 0; format[i]; i++)
		{
			if (format[i] == '%')
			{
				i++;
				count += func_format(ap, format[i]);
				i++;
			}
			buf = &format[i];
			count += write(1, buf, 1);
		}
	}
	return (count);
}
