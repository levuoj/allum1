/*
** my_showstr.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:21:48 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:02:07 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	my_putchar(str[i]);
      else
	{
	  my_putchar('\\');
	  if (str[i] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], "0123456789ABCDEF");
	}
      i = i + 1;
    }
  return (0);
}
