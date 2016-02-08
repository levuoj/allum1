/*
** my_strncmp.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 13:57:13 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:36:59 2016 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_strcmp(char *s1, char *s2)
{
  int	t;

  t = 0;
  if (my_strlen(s1) == my_strlen(s2))
    return (0);
  else
    {
      t = my_strlen(s1) - my_strlen(s2);
      my_put_nbr(t);
    }
  return (0);
}
