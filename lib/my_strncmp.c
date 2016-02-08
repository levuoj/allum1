/*
** my_strncmp.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:59:27 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:05:53 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_strncmp(char *s1, char *s2, int nb)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && i < nb)
    i = i + 1;
  if ((s1[i] == '\0' && s2[i] == '\0') || i == nb)
    return (0);
  else if (s1[i] > s2[i])
    return (1);
  else
    return (-1);
}
