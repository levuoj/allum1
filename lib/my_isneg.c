/*
** my_isneg.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:38:50 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:56:44 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_isneg(int nb)
{
  if (nb < 0)
    my_putchar(78);
  else
    my_putchar(80);
  return (0);
}
