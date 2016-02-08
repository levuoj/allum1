/*
** my_rev_params.c for  in /home/jouvel_a/Piscine_C_J07
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Wed Oct  7 16:20:11 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:59:48 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_rev_params(int argc, char **argv)
{
  int	a;

  a = argc - 1;
  while (a >= 0)
    {
      my_putstr(argv[a]);
      my_putchar('\n');
      a = a - 1;
    }
  return (0);
}
