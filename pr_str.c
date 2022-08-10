#include "main.h"

/**
 * pr_str - format for string
 * @buf: steing to print
 *
 * Return: number of characters printes
 */
int pr_str(char *buf)
{
	int i;
	int bytes;
	const void *ptr;

	for (i = 0; buf[i]; i++)
	{
		ptr = &buf[i];
		write(1, ptr, 1);
	}
	bytes = i - 1;
	return (bytes);
}
