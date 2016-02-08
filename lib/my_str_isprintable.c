/*
** my_str_isprintable.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:19:43 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:04:37 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 32 && str[i] <= 126)
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
