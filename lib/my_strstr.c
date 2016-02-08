/*
** my_strstr.c for  in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 08:52:26 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:07:01 2015 Anthony JOUVEL
*/

#include "../include/my.h"

char	*my_strstr(char *str, char *to_find)
{
  int	n;

  n = 0;
  if (str[0] != '\0')
    {
      while (to_find[n] != '\0')
	{
	  if (to_find[n] != str[n])
	    return (my_strstr(str + 1, to_find));
	  n = n + 1;
	}
      return (str);
    }
  else
    return (0);
}
