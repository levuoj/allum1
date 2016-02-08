/*
** my_printf_flags_2.c for flags2  in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Nov 10 11:57:04 2015 Anthony JOUVEL
** Last update Thu Dec 10 15:42:36 2015 Anthony JOUVEL
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

int	flag_u(va_list ap, unsigned int len)
{
  len = len + my_put_nbr_unsigned(va_arg(ap, unsigned int));
  return (len);
}

int	flag_c(va_list ap, unsigned int len)
{
  my_putchar(va_arg(ap, int));
  len = len + 1;
  return (len);
}

int	flag_s(va_list ap, unsigned int len)
{
  char *tmp;

  tmp = va_arg(ap, char *);
  if (tmp == NULL)
    {
      len = len + my_putstr("(null)");
      return (len);
    }
  len = len + my_putstr(tmp);
  return (len);
}

int	flag_S(va_list ap, unsigned int len)
{
  char *tmp;

  tmp = va_arg(ap, char *);
  if (tmp == NULL)
    {
      len = len + my_putstr("(null)");
      return (len);
    }
  len = len + my_putstr_everything(tmp);
  return (len);
}
