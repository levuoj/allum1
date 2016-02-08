/*
** my_show_wordtab.c for  in /home/jouvel_a/Piscine_C_J08/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Thu Oct  8 16:29:49 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:02:25 2015 Anthony JOUVEL
*/

#include "../include/my.h"

int	my_show_wordtab(char **tab)
{
  int	k;

  k = 0;
  while (tab[k] != '\0')
    {
      my_putstr(tab[k]);
      my_putchar('\n');
      k = k + 1;
    }
  return (0);
}
