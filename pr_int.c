#include "main.h"

/**
 * pr_int - format for integer
 * @buf: integer to print
 *
 * Return: number of characters printed
 */
int pr_int(int buf)
{
  int i, len, mul, num, bytes;
  void *ptr;

  num = buf;
  mul = 1;
  len = 1;
  ptr = malloc(1);
  bytes = 0;
  if (num < 0)
    {
      *(char *)ptr = '-';
      write(1, ptr, 1);
      num = 0 - num;
      bytes += 1;
    }
  while ((num / mul) > 9)
    {
      mul = mul * 10;
      len++;
    }
  for (i = 0; i < len; i++)
    {
      *(char *)ptr = '0' + ((num / mul) % 10);
      write(1, ptr, 1);
      mul = mul / 10;
    }
  bytes += len;
  return (bytes);
}
