/*
** disp_stdarg.c for disp_stdarg in /home/jouvel_a/rendu/PSU_2015_my_printf_bootstrap
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Wed Nov  4 18:00:29 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:55:39 2015 Anthony JOUVEL
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"

void		disp_stdarg(char *s, ...)
{
  va_list	ap;
  int		index;

  index = 0;
  va_start(ap, s);
  while (s[index] != '\0')
    {
      if (s[index] == 's')
	my_putstr(va_arg(ap, char *));
      if (s[index] == 'i')
	my_put_nbr(va_arg(ap, int));
      if (s[index] == 'c')
	my_putchar(va_arg(ap, int));
      index = index + 1;
      my_putchar('\n');
    }
  va_end(ap);
}
