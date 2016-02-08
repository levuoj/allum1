/*
** my_revstr.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Oct  5 18:40:46 2015 Anthony JOUVEL
** Last update Tue Jan  5 17:11:07 2016 Anthony JOUVEL
*/

#include "../include/my.h"

void	my_swap_rev(char *a, char *b)
{
  int	z;

  z = *a;
  *a = *b;
  *b = z;
}

char	*my_revstr(char *str)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = my_strlen(str) - 1;
  c = my_strlen(str);
  if ((my_strlen(str) % 2) != 0)
    c = c - 1;
  while (a != c / 2)
    {
      my_swap_rev(&str[a], &str[b]);
      a = a + 1;
      b = b - 1;
    }
  return (str);
}
