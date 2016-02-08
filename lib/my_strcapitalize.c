/*
** my_strcapitalize.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 22:05:55 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:41:39 2016 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strcapitalize(char *str)
{
  int	i;

  i = 1;
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 32;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') && ((str[i -1] == ' ') ||
					       (str[i - 1] == '+') ||
					       (str[i - 1] == '-')))
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
