/*
** my_find_prime_sup.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:55:23 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:33:26 2016 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_find_prime_sup(int nb)
{
  int	i;

  while ((i = my_is_prime(nb)) == 0)
    nb = nb + 1;
  return (nb);
}
