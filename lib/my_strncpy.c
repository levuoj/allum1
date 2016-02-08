/*
** my_strncpy.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Oct  5 16:32:48 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:06:27 2015 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n && src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  while (i > n)
    {
      dest[i] = '\0';
      i = i + 1;
    }
  return (dest);
}
