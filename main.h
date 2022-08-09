#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char * const, ...);
int pr_int(int);
int pr_str(char *);
int pr_bouxx(char, unsigned int);
int pr_bin(unsigned int);
int pr_oct(unsigned int);
int pr_uint(unsigned int);
int pr_hex(unsigned int);
int pr_HEX(unsigned int);

#endif
