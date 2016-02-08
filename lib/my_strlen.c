/*
** my_strlen.c for my_strlen in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Fri Oct  2 10:48:33 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:05:04 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
