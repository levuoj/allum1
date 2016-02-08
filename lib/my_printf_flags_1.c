/*
** my_printf_flag_1.c for flags1 in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Nov 10 11:02:28 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:57:40 2015 Anthony JOUVEL
*/

#include <stdarg.h>
#include "../include/my.h"

int	flag_i_d(va_list ap, unsigned int len)
{
  len = len + my_put_nbr(va_arg(ap, int));
  return (len);
}

int	flag_x(va_list ap, unsigned int len)
{
  len = len + my_putnbr_base_unsigned(va_arg(ap, int), "0123456789abcdef");
  return (len);
}

int	flag_o(va_list ap, unsigned int len)
{
  len = len + my_putnbr_base_unsigned(va_arg(ap, int), "01234567");
  return (len);
}

int	flag_modulo(__attribute__((__unused__)) va_list ap, unsigned int len)
{
  len = len + 1;
  my_putchar('%');
  return (len);
}

int	flag_b(va_list ap, unsigned int len)
{
  len = len + my_putnbr_base_unsigned(va_arg(ap, unsigned int), "01");
  return (len);
}
