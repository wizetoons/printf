#include "main.h"

/**
 * pr_HEX - format for hexadecimal
 * @ap: optional arguments list
 *
 * Return: number of characters printed
 */
int pr_HEX(va_list ap)
{
	int i, count, remainder;
	unsigned int arg = va_arg(ap, unsigned int);
	int div = arg;
	void *buf;
	char *hexa;
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
			div = div / 16;
		hexa = malloc(i);
		for (i = 0; arg > 0; i++)
		{
			remainder = arg % 16;
			if (remainder > 9)
				*(hexa + i) = 'A' + (remainder % 10);
			else
				*(hexa + i) = '0' + remainder;
			arg = arg / 16;
		}
		count = i;
		for (; i >= 0; i--)
		{
			buf = &hexa[i];
			write(1, buf, 1);
		}
		free(hexa);
		return (count); }}
