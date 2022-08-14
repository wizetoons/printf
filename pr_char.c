#include "main.h"

/**
 * pr_char - format for char
 * @ap: optional arguments list
 *
 * Return: number of characters printes
 */
int pr_char(va_list ap)
{
	char arg = va_arg(ap, int);
	void *buf;

	if (arg == '\0')
		return (0);
	buf = &arg;
	write(1, buf, 1);
	return (1);
}
