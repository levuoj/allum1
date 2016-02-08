/*
** my_putstr_error.c for my_putstr_error in /home/jouvel_a/rendu/PSU_2015_my_printf
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Nov 17 10:17:10 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:12:25 2016 Anthony JOUVEL
*/

#include "../include/my.h"
#include "../include/include.h"

int	my_putstr_error(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      write(2, &str[a], 1);
      a = a + 1;
    }
  return (a);
}
