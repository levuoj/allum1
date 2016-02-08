/*
** my_putnbr_base_unsigned.c for my_putnbr_base_unsigned in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Nov 16 15:27:35 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:12:57 2016 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_putnbr_base_unsigned(unsigned int nbr, char *base)
{
  unsigned int	result;
  unsigned int	divisor;
  unsigned int	length;
  unsigned int	len;

  len = 0;
  result = 0;
  divisor = 1;
  length = my_strlen(base);
  while ((nbr / divisor) >= length)
    divisor = divisor * length;
  while (divisor > 0)
    {
      len = len + 1;
      result = (nbr / divisor) % length;
      my_putchar(base[result]);
      divisor = divisor / length;
    }
  return (len);
}
