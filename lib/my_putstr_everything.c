/*
** my_putstr_everything.c for my_putstr_everything in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Nov 16 15:28:43 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:01:36 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int		my_putstr_everything(char *str)
{
  unsigned int	i;
  unsigned int len;

  len = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] < 127)
	{
	  my_putchar(str[i]);
	  len = len + 1;
	}
      else
	{
	  my_putchar(92);
	  len = len + 1;
	  if (str[i] < 8)
	    len = len + my_putstr("00");
	  if (str[i] >= 8 && str[i] < 64)
	    len = len + my_putstr("0");
	  len = len + my_putnbr_base(str[i], "01234567");
	}
      i = i + 1;
    }
  return (len);
}
