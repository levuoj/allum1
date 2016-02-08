/*
** my_is_prime.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:53:55 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:56:58 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  if (nb < 2)
    return (0);
  while (i < nb)
    {
      if (nb % i == 0)
	return (0);
      i = i + 1;
    }
  return (1);
}
