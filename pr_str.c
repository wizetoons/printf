#include "main.h"

/**
 * pr_str - format for string
 * @ap: optional arguments list
 *
 * Return: number of characters printes
 */
int pr_str(va_list ap)
{
	int i, count = 0;
	char *arg = va_arg(ap, char *);
	void *buf;

	if (arg == NULL)
		return (0);
	for (i = 0; arg[i]; i++)
	{
		buf = &arg[i];
		write(1, buf, 1);
		count++;
	}
	return (count);
}
