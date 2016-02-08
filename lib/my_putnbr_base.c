/*
** my_putnbr_base.c for my_putnbr_base in /home/jouvel_a/lib/my
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Sun Oct 18 20:01:37 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:58:35 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int		my_putnbr_base(int nbr, char *base)
{
  unsigned int	result;
  unsigned int	divisor;
  unsigned int	length;
  unsigned int	len;

  len = 0;
  result = 0;
  divisor = 1;
  length = my_strlen(base);
  if (nbr < 0)
    {
      my_putchar('-');
      len = len + 1;
      nbr = nbr * -1;
    }
  while ((nbr / divisor) >= length)
    divisor = divisor * length;
  while (divisor > 0)
    {
      result = (nbr / divisor) % length;
      my_putchar(base[result]);
      len = len + 1;
      divisor = divisor / length;
    }
  return (len);
}
