/*
** my_getnbr.c for get_nbr in /home/jouvel_a
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Oct 12 11:22:25 2015 Anthony JOUVEL
** Last update Thu Feb 18 11:23:10 2016 jouvel_a
*/

#include "../include/my.h"

int	str_i(char str)
{
  if (str >= '0' && str <= '9')
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	result;

  result = 0;
  nb = 1;
  i = 0;
  if ((str[i] < '0' && str[i] > '9') && (str[i] != '-' || str[i] != '+'))
    return (0);
  while ((str[i] == '-' || str[i] == '+') && str[i] != 0)
    i = i + 1;
  if (i && str[i - 1] == '-')
    nb = -1;
  while (str_i(str[i]) == 1 && str[i] != 0)
    {
      if (str_i(str[i]) == 1)
	{
	  result = ((result * 10) + (str[i] - 48));
	}
      i = i + 1;
    }
  return (result * nb);
}
