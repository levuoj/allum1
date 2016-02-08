/*
** my_strcpy.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Oct  5 11:59:01 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:34:19 2016 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
