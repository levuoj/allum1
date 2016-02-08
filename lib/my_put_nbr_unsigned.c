/*
** my_put_nbr_unsigned.c for my_put_nbr_unsigned in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Nov 16 15:27:00 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:08:47 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int		my_put_nbr_unsigned(unsigned int nb)
{
  unsigned int	a;
  unsigned int	len;

  a = 1;
  len = 0;
  while ((nb / a) >= 10)
    a = a * 10;
  while (a > 0)
    {
      my_putchar((nb / a) % 10 + '0');
      len = len + 1;
      a = a / 10;
    }
  return (len);
}
