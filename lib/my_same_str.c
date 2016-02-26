/*
** my_same_str.c for my_same_str in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Fri Feb 26 14:08:37 2016 jouvel_a
** Last update Fri Feb 26 14:08:55 2016 jouvel_a
*/

#include "include.h"
#include "my.h"

int	my_same_str(char *s1, char *s2)
{
  int	index;

  index = 0;
  if (my_strlen(s1) != my_strlen(s2))
    return (1);
  else
    while (s1[index] != '\0')
      {
	if (s1[index] != s2[index])
	  return (1);
	index++;
      }
  return (0);
}
