/*
** my_putstr.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 18:39:33 2015 Anthony JOUVEL
** Last update Sun Nov 22 17:59:20 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_putstr(char *str)
{
  int	i;
  int	len;

  i = 0;
  len = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      len = len + 1;
      i = i + 1;
    }
  return (len);
}
