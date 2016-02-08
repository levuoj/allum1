/*
** my_square_root.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:52:37 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:02:49 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_square_root(int nb)
{
  long	i;

  i = 1;
  while (i * i <= nb)
    {
      if (i * i == nb)
	return (i);
      i = i + 1;
    }
  return (0);
}
