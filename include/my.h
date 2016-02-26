/*
** my.h for my in /home/jouvel_a/rendu/CPE_2015_Pushswap/include
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Sun Nov 22 17:47:52 2015 Anthony JOUVEL
** Last update Fri Feb 26 14:10:09 2016 jouvel_a
*/

#ifndef MY_H_
# define MY_H_

#include <stdarg.h>
#include <stdlib.h>

typedef struct	s_printf
{
  char		flags;
  int		(*ptr)(va_list op, unsigned int len);
}		t_printf;

int		my_same_str(char *s1, char *s2);
char		*get_next_line(const int fd);
int		flag_i_d(va_list ap, unsigned int len);
int		flag_x(va_list ap, unsigned int len);
int		flag_o(va_list ap, unsigned int len);
int		flag_modulo(va_list ap, unsigned int len);
int		flag_b(va_list ap, unsigned int len);
int		flag_u(va_list ap, unsigned int len);
int		flag_c(va_list ap, unsigned int len);
int		flag_s(va_list ap, unsigned int len);
int		flag_S(va_list ap, unsigned int len);
int		flag_p(va_list ap, unsigned int len);
int		flag_X(va_list ap, unsigned int len);
int		no_flag(va_list ap, unsigned int len);
int		flag_error(va_list ap, unsigned int len);
void		my_putchar(char c);
int		my_isneg(int nb);
int		my_put_nbr(int nb);
void		my_swap(int *a, int *b);
int		my_putstr(char *str);
int		my_putstr_error(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_power_rec(int nb, int power);
int		my_square_root(int nb);
int		my_is_prime(int nombre);
int		my_printf(const char *format, ...);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char *to_find);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int nb);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char		*my_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		my_str_isnum(char *str);
int		my_str_islower(char *str);
int		my_str_isupper(char *str);
int		my_str_isprintable(char *str);
int		my_showstr(char *str);
int		my_showmem(char *str, int size);
int		my_show_wordtab(char **tab);
char		*my_strcat(char *dest, char *src);
char		*my_strncat(char *dest, char *src, int nb);
int		my_getnbr_base(char *str, char *base);
int		my_putnbr_base(int nbr, char *base);
int		my_putnbr_base_unsigned(unsigned int nbr, char *base);
int		my_aff_params(int argc, char **argv);
void		disp_stdarg(char *s, ...);
int		my_put_nbr_unsigned(unsigned int nb);
int		my_putstr_everything(char *str);
char		**my_str_to_wordtab(char *str);
char		*sum_params(int argc, char **argv);
int		sum_stdarg(int i, int nb, ...);

#endif /* !MY_H_ */
