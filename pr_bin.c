#include "main.h"

/**
 * pr_bin - format for binary
 * @ap: optional arguments list
 *
 * Return: number of characters printed
 */
int pr_bin(va_list ap)
{
	int i, count, remainder;
	unsigned int arg = va_arg(ap, unsigned int);
	int div = arg;
	void *buf;
	char *binary;
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
			div = div / 2;
		binary = malloc(i);
		if (binary == NULL)
			return (0);
		for (i = 0; arg > 0; i++)
		{
			remainder = arg % 2;
			*(binary + i) = '0' + remainder;
			arg = arg / 2;
		}
		count = i;
		while (i >= 0)
		{
			buf = &binary[i];
			write(1, buf, 1);
			i--;
		}
		free(buf);
		return (count);
	}
}
