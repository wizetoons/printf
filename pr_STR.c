#include "main.h"

/**
 * pr_STR - format for string
 * @ap: optional arguments list
 *
 * Return: number of characters printes
 */
int pr_STR(va_list ap)
{
	int i, count = 0, c;
	char *arg = va_arg(ap, char *);
	void *buf;
	char *npc = "\\x00";

	if (arg == NULL)
		return (0);
	for (i = 0; arg[i]; i++)
	{
		c = arg[i];
		if ((c > 0 && c < 32) || c > 127)
		{
			if (c > 9)
				npc[3] = 'A' + (c % 10);
			else
				npc[3] = '0' + c;
			buf = &npc;
			write(1, buf, 1);
			count += 4;
		}
		else
		{
			buf = &arg[i];
			write(1, buf, 1);
			count++;
		}
	}
	return (count);
}
