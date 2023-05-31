#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
<<<<<<< HEAD

/**
 * struct print_formart - This struct will be used to filter which print
 * function for i,c,s,d,x,X,o,p,u
 * @spec: % format specifier to use
 * @selectprint: function pointer to select the correct printer
 */
typedef struct print_formart
{
	char *spec;
	int (*selectprint)(const char *, va_list arg);
} PrtFmt;

/**
 * struct flag_function - a stucture to filter the approprate flag function
 *
 * @flag: the falg
 * @flag_opt: fuction for the flag operation
 */

typedef struct flag_function
{
	char *flag;
	int (*flag_opt)(const char **);
} FlagFunc;


int my_puts(char c);
int my_putchar(char c);
int output_alpha(const char *, va_list arg);
int output_char(const char *, va_list arg);
int output_decimal(const char *, va_list arg);
int return_integer(const char *, va_list arg);
int _printf(const char *format, ...);
int percent_handler(const char **s, va_list args, int no_perc);
int is_flag(const char s);
int (*cfmt(const char **s))(const char *, va_list);
int output_ptraddress(const char *s, va_list arg);
int output_ROT13(const char *, va_list arg);
int output_revers(const char *, va_list arg);
int output_bits(const char *, va_list arg);
int output_hexlower(const char *, va_list arg);
int output_hexupper(const char *, va_list arg);
int output_bigS(const char *, va_list arg);
int output_bigSX(char *X);
int output_unsignedint(const char *, va_list arg);
int output_octal(const char *, va_list arg);
int hight(const char *, char);
int justify(const char **, char);
int flag_plus(const char **);
int flag_hash(const char **);
int flag_space(const char **, long int);
int precision(const char *, char);
int print_array_all(int *, int);
int print_array_val(int *, int);
int count_array(int *, int);
int print_recus(int, char);
=======

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_dec(va_list d);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_octal(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);

/**
 * struct code_format - code structure format
 * @sc: specifier
 * @f: function included
 */

typedef struct code_format
{
  char *sc;
  int (*f)(va_list);
} code_f;
>>>>>>> b9d92d1912f924a2c436154012f8a2cf2a6bf3ef

#endif
