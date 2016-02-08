/*
** my_str_isupper.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:18:11 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:04:51 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
