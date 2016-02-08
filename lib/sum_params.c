/*
** sum_params.c for  in /home/jouvel_a/Piscine_C_J08/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Thu Oct  8 14:29:26 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:08:02 2015 Anthony JOUVEL
*/

#include <stdlib.h>
#include "../include/my.h"

char	*sum_params(int argc, char **argv)
{
  char	*str;
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  while (j < argc)
    {
      i = i + my_strlen(argv[j] + 1);
      j = j + 1;
    }
  str = malloc(i + 1);
  j = 0;
  while (j < argc)
    {
      k = k + my_strcat(str, argv[j]);
      my_strcat(str, "\n");
      j = j + 1;
    }
  return (str);
}
