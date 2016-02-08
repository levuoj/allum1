/*
** sum_stdarg.c for std_arg in /home/jouvel_a/rendu/PSU_2015_my_printf_bootstrap
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Wed Nov  4 14:39:08 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:46:57 2016 Anthony JOUVEL
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"

int	display(int i, int result)
{
  if (i != 0 && i != 1)
    {
      my_putstr("error");
      my_putchar('\n');
      return (1);
    }
  else
    {
      my_put_nbr(result);
      my_putchar('\n');
      return (0);
    }
}

int		sum_stdarg(int i, int nb, ...)
{
  va_list	ap;
  int		result;

  result = 0;
  va_start(ap, nb);
  if (i == 0)
    {
      while (nb)
	{
	  result = result + va_arg(ap, int);
	  nb = nb - 1;
	}
    }
  else if (i == 1)
    {
      while (nb)
	{
	  result = result + my_strlen(va_arg(ap, char *));
	  nb = nb - 1;
	}
    }
  display(i, result);
  va_end(ap);
  return (0);
}
