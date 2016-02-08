/*
** my_aff_params.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Wed Oct  7 15:48:57 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:55:51 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	aff_params(int argc, char **argv)
{
  int	k;

  k = 0;
  while (k < argc)
    {
      my_putstr(argv[k]);
      my_putchar('\n');
      k = k + 1;
    }
  return (0);
}
