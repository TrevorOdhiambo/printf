#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* for varidic funs */
#include <unistd.h>/* for write fun  */
#include <stdlib.h>
#include <stdio.h>
/**
* struct sp_char - sturct for the special character
*@ch: symbole of the speacial character
*@fun: pointer to fun to print the argurment
*/
typedef struct sp_char
{
	char ch;
	int (*fun)(va_list, int *);
} spChar;

/**
*struct signs - sturct for the special character
*@ch: symbole of the signs
*@fun: pointer to fun to print sign
*/
typedef struct signs
{
	char ch;
	void (*fun)(int, char, int, va_list, int *);
} sign;

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char sp_ch);
int print_str(va_list pa, int *pCount);
int print_ch(va_list pa, int *pCount);
int print_int(va_list pa, int *pCount);

#endif
