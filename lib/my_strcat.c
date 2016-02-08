/*
** my_strcat.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:51:43 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:03:16 2015 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strcat(char *dest, char *src)
{
  int	a;
  int	b;

  a = 0;
  b = my_strlen(dest);
  while (src[a] != '\0')
    {
      dest[a + b] = src[a];
      a = a + 1;
    }
  return (dest);
}
