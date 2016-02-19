/*
** my_messages.c for my_messages in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb 15 20:43:12 2016 jouvel_a
** Last update Fri Feb 19 14:32:31 2016 jouvel_a
*/

#include "include.h"

#define red "\033[00;31m"
#define magenta "\033[00;35m"
#define normal "\033[00m"
#define bold "\033[01m"

int	error(char *message)
{
  my_printf(red "%s" normal, message);
  return (42);
}

int	ending(char *message)
{
  my_printf(magenta bold "%s" normal, message);
  return (0);
}