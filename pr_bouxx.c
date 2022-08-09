#include "main.h"

/**
 * pr_bouxx - selects format functiom
 * @id: format idemtifier
 * @buf: unsigned integer to format and print
 *
 * Return: number of characters printed
 */
int pr_bouxx(char id, unsigned int buf)
{
	int bytes;

	if (id == 'b')
		bytes = pr_bin(buf);
	else if (id == 'o')
		bytes = pr_oct(buf);
	else if (id == 'u')
		bytes = pr_uint(buf);
	else if (id == 'x')
		bytes = pr_hex(buf);
	else
		bytes = pr_HEX(buf);
	return (bytes);
}
