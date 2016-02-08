/*
** my_str_islower.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:16:46 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:04:09 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
