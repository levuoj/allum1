/*
** my_allum1.c for my_allum1 in /home/jouvel_a/rendu/CPE_2015_Allum1
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb  8 12:03:48 2016 Anthony JOUVEL
** Last update Mon Feb 15 15:19:47 2016 jouvel_a
*/

#include "include.h"

int	player_turn(int *array)
{
  return (0);
}

int	main()
{
  int	array[4];

  array[0] = 1;
  array[1] = 3;
  array[2] = 5;
  array[3] = 7;
  my_printf("*********\n");
  first_line(array[0]);
  second_line(array[1]);
  third_line(array[2]);
  fourth_line(array[3]);
  my_printf("*********\n");
  player_turn(array);
  return (0);
}
