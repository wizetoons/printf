#include "main.h"

/**
 * _printf - prints to stdout
 * @text: string to print
 *
 * Return: nunber of characters printed
 */
int _printf(const char * const text, ...)
{
  va_list ap;
  int i = 0;
  int bytes = 0;
  char id;
  const void *buf;
  int int_buf;
  char *str_buf;
  unsigned int uint_buf;

  va_start(ap, text);
  while (text[i])
    {
      if (text[i] == '%')
	{
	  i++;
	  id = text[i];
	  if (id == 'd' || id == 'i')
	    {int_buf = va_arg(ap, int);
	      bytes = bytes + pr_int(int_buf); }
	  else if (id == 'c')
	    {int_buf = va_arg(ap, int);
	      buf = &int_buf;
	      write(1, buf, 1);
	      bytes += 1; }
	  else if (id == 's')
	    {str_buf = va_arg(ap, char *);
	      bytes = bytes + pr_str(str_buf); }
	  else if (id == '%')
	    {buf = &text[i];
	      write(1, buf, 1);
	      bytes += 1; }
	  else if (id == 'b' || id == 'u' || id == 'o' || id == 'x' || id == 'X')
	    {uint_buf = va_arg(ap, unsigned int);
	      bytes = bytes + pr_bouxx(id, uint_buf); }
	  i++; }
      buf = &text[i];
      bytes = bytes + write(1, buf, 1);
      i++; }
  va_end(ap);
  return (bytes); }
