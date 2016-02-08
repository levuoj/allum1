/*
** my_sort_tab.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 21:44:40 2015 Anthony JOUVEL
** Last update Sun Nov 22 18:02:36 2015 Anthony JOUVEL
*/

#include "../include/my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	k;

  i = 0;
  k = 1;
  while (k == 1)
    {
      k = 0;
      while ((i + 1) < size)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      k = 1;
	      my_swap(&tab[i], &tab[i + 1]);
	    }
	  i = i + 1;
	}
    }
}
