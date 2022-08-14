#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct fn
{
	char id;
	int (*f)(va_list);
} func_s;

int _printf(const char *, ...);
int func_format(va_list, char);
int pr_str(va_list);
int pr_char(va_list);
int pr_pct(void);
int pr_int(va_list);
int pr_bin(va_list);
int pr_oct(va_list);
int pr_uint(va_list);
int pr_hex(va_list);
int pr_HEX(va_list);
int pr_STR(va_list);

#endif
