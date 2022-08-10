#include "main.h"

/**
 * pr_oct - format for octadecimal
 * @buf: unsigned integer to print in octal
 *
 * Return: number of characters printed
 */
int pr_oct(unsigned int buf)
{
	int i;
	unsigned int num = buf;
	const void *ptr;
	int remainder;
	char *octal;
	int bytes;
	char o = '0';

	if (buf == 0)
	{
		ptr = &o;
		write(1, ptr, 1);
		return (1);
	}
	else
	{
		i = 0;
		while (num > 0)
		{
			num = num / 8;
			i++;
		}
		octal = malloc(i);
		i = 0;
		num = buf;
		while (num > 0)
		{
			remainder = num % 8;
			*(octal + i) = '0' + remainder;
			num = num / 8;
			i++;
		}
		bytes = i;
		while (i >= 0)
		{
			ptr = &octal[i];
			write(1, ptr, 1);
			i--;
		}
		free(octal);
		return (bytes);
	}
}
