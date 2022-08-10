#include "main.h"

/**
 * pr_uint - format for unsigned integer
 * @buf: unsigned integer to print
 *
 * Return: number of characters printed
 */
int pr_uint(unsigned int buf)
{
	int i, len, mul, bytes;
	unsigned int num;
	void *ptr;

	num = buf;
	mul = 1;
	len = 1;
	ptr = malloc(1);
	bytes = 0;
	while ((num / mul) > 9)
	{
		mul = mul * 10;
		len++;
	}
	for (i = 0; i < len; i++)
	{
		*(char *)ptr = '0' + ((num / mul) % 10);
		write(1, ptr, 1);
		mul = mul / 10;
	}
	bytes += len;
	return (bytes);
}
