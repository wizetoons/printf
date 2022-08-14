#include "main.h"

/**
 * func_format - checks and gets formatting function
 * @ap: optional arguments
 * @id: format identifier
 *
 * Return: number of characters printed
*/
int func_format(va_list ap, char id)
{
	func_s func[] = {
		{'s', pr_str},
		{'c', pr_char},
		{'i', pr_int},
		{'d', pr_int},
		{'b', pr_bin},
		{'o', pr_oct},
		{'u', pr_uint},
		{'x', pr_hex},
		{'X', pr_HEX},
		{'S', pr_STR},
		{'\0', NULL}
	};
	int i;
	int count = 0;
	const void *buf;
	char *ignore = "%0";

	for (i = 0; func[i].id != '\0'; i++)
	{
		if (func[i].id == id)
		{
			count += func[i].f(ap);
			return (count);
		}
	}
	if (id == '%')
	{
		pr_pct();
		return (1);
	}
	else
	{
		ignore[1] = id;
		buf = &ignore;
		write(1, buf, 2);
		return (2);
	}
}
