/*
** my_messages.c for my_messages in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb 15 20:43:12 2016 jouvel_a
** Last update Fri Feb 19 16:11:46 2016 jouvel_a
*/

#include "include.h"

int	error(char *message, int nb)
{
  my_printf("%s", message);
  return (nb);
}

int	ending(char *message)
{
  my_printf("%s", message);
  return (0);
}
