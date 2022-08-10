#include "main.h"

/**
 * pr_bin - format for binary
 * @buf: unsigned integer to print in binary
 *
 * Return: number of characters printed
 */
int pr_bin(unsigned int buf)
{
	int i;
	unsigned int num = buf;
	const void *ptr;
	int remainder;
	char *binary;
	int bytes;
	char o = '0';

	if (num == 0)
	{
		ptr = &o;
		write(1, ptr, 1);
		return (1);
	}
	else
	{
		for (i = 0; num > 0; i++)
			num = num / 2;
		binary = malloc(i);
		num = buf;
		for (i = 0; num > 0; i++)
		{
			remainder = num % 2;
			*(binary + i) = '0' + remainder;
			num = num / 2;
		}
		bytes = i;
		while (i >= 0)
		{
			ptr = &binary[i];
			write(1, ptr, 1);
			i--;
		}
		return (bytes);
	}
}
