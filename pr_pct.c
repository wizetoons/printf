#include "main.h"

/**
 * pr_pct - format for percent
 *
 * Return: number of characters printes
 */
int pr_pct(void)
{
	char arg = '%';
	void *buf;

	buf = &arg;
	write(1, buf, 1);
	return (1);
}
