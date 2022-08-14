#include "main.h"

/**
 * pr_oct - format for octadecimal
 * @ap: optional arguments list
 *
 * Return: number of characters printed
 */
int pr_oct(va_list ap)
{
	int i, count, remainder;
	unsigned int arg = va_arg(ap, unsigned int);
	int div = arg;
	void *buf;
	char *octal;
	char zero = '0';

	if (arg == '\0')
		return (0);
	if (arg == 0)
	{
		buf = &zero;
		write(1, buf, 1);
		return (1);
	}
	else
	{
		for (i = 0; div > 0; i++)
			div = div / 8;
		octal = malloc(i);
		if (octal == NULL)
			return (0);
		for (i = 0; arg > 0; i++)
		{
			remainder = arg % 8;
			*(octal + i) = '0' + remainder;
			arg = arg / 8;
		}
		count = i;
		while (i >= 0)
		{
			buf = &octal[i];
			write(1, buf, 1);
			i--;
		}
		free(octal);
		return (count);
	}
}
