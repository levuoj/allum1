/*
** my_swamp.c for my_swamp in /home/jouvel_a/test
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Thu Oct  1 20:54:41 2015 Anthony JOUVEL
** Last update Tue Jan  5 11:13:57 2016 Anthony JOUVEL
*/

#include "../include/my.h"

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
