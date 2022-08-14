#include "main.h"

/**
 * pr_uint - format for unsigned integer
 * @ap: optional arguments list
 *
 * Return: number of characters printed
 */
int pr_uint(va_list ap)
{
	int i, mul = 1, count = 0;
	void *buf;
	unsigned int arg = va_arg(ap, unsigned int);

	if (arg == '\0')
		return (0);
	buf = malloc(1);
	if (buf == NULL)
		return (0);
	while ((arg / mul) > 9)
	{
		mul = mul * 10;
	}
	for (i = 0; mul > 0; i++)
	{
		*(char *)buf = '0' + ((arg / mul) % 10);
		write(1, buf, 1);
		mul = mul / 10;
		count++;
	}
	return (count);
}
