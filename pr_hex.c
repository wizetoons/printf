#include "main.h"

/**
 * pr_hex - format for hexadecimal
 * @buf: unsigned integer to print in hex
 *
 * Return: number of characters printed
 */
int pr_hex(unsigned int buf)
{
	int i, remainder, bytes;
	unsigned int num = buf;
	const void *ptr;
	char *hexa;
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
			num = num / 10;
		hexa = malloc(i);
		num = buf;
		i = 0;
		while (num > 0)
		{
			remainder = num % 16;
			if (remainder > 9)
			{
				*(hexa + i) = 'a' + (remainder % 10);
			}
			else
			{
				*(hexa + i) = '0' + remainder;
			}
			num = num / 16;
			i++;
		}
		bytes = i;
		while (i >= 0)
		{
			ptr = &hexa[i];
			write(1, ptr, 1);
			i--;
		}
		free(hexa);
		return (bytes); }}
