/*
** my_printf.c for my_printf in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Nov  9 11:50:27 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:55:26 2016 Anthony JOUVEL
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/my.h"

static const t_printf	tab[] =
{
  {'c', flag_c},
  {'%', flag_modulo},
  {'u', flag_u},
  {'s', flag_s},
  {'d', flag_i_d},
  {'i', flag_i_d},
  {'x', flag_x},
  {'X', flag_X},
  {'o', flag_o},
  {'b', flag_b},
  {'S', flag_S},
  {'p', flag_p},
  {'z', flag_error},
  {'\0', no_flag},
};

int		process(const char *format, va_list ap, unsigned int index,
			unsigned int len)
{
  unsigned int	i;

  while (format[index] != '\0')
    {
      i = 0;
      if (format[index] == '%')
	{
	  index = index + 1;
	  while (tab[i].flags != format[index] && tab[i].flags != '\0')
	    i = i + 1;
	  len = len + tab[i].ptr(ap, len);
	  index = index + 1;
	}
      else
	{
	  my_putchar(format[index]);
	  len = len + 1;
	  index = index + 1;
	}
    }
  return (len);
}

int		my_printf(const char *format, ...)
{
  va_list	ap;
  unsigned int	index;
  unsigned int	len;

  len = 0;
  index = 0;
  va_start(ap, format);
  process(format, ap, index, len);
  va_end(ap);
  return (len);
}
