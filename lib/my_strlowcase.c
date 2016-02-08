/*
** my_strlowcase.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:04:23 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:05:17 2015 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strlowcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
