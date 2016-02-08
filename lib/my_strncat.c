/*
** my_strncat.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Wed Oct  7 10:52:55 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:05:31 2015 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	j;

  i = 0;
  j = my_strlen(dest);
  while (nb > i && src[i] != '\0')
    {
      dest[j + i] = src[i];
      i = i + 1;
    }
  dest[j + i] = '\0';
  return (dest);
}
