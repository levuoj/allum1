/*
** my_printf_flags_3.c for flags3 in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Wed Nov 11 11:53:21 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:55:03 2016 Anthony JOUVEL
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int	flag_p(va_list ap, unsigned int len)
{
  len = len + my_putstr("0x");
  len = len + my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
  return (len);
}

int	flag_X(va_list ap, unsigned int len)
{
  len = len + my_putnbr_base_unsigned(va_arg(ap, int), "0123456789ABCDEF");
  return (len);
}

int	no_flag(__attribute__((__unused__)) va_list ap, unsigned int len)
{
  my_putchar('%');
  len = len + 1;
  return (len);
}

int	flag_error(va_list ap, unsigned int len)
{
  char *tmp;

  tmp = va_arg(ap, char *);
  if (tmp == NULL)
    {
      len = len + my_putstr("(null)");
      return (len);
    }
  len = len + my_putstr_error(tmp);
  return (len);
}
