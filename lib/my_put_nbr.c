/*
** my_put_nbr.c for my_put_nbr in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Thu Oct  1 10:21:54 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:09:19 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_put_nbr(int nb)
{
  int	a;
  int	len;

  len = 0;
  a = 1;
  if (nb < 0)
    {
      my_putchar('-');
      len = len + 1;
      nb = nb * -1;
    }
  if (nb == -2147483648)
    {
      len = len + my_putstr("2147483648");
      return (len);
    }
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
