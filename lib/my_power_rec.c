/*
** my_power_rec.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:49:52 2015 Anthony JOUVEL
** Last update Tue Feb  2 16:22:21 2016 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_power_rec(int nb, int power)
{
  if (power == 0)
    return (1);
  else if (power > 0)
    {
      nb = nb * my_power_rec(nb, power -1);
      return (nb);
    }
  else if (power < 0)
    my_printf("%z", "Error : negative power unsupported\n");
  return (1);
}
