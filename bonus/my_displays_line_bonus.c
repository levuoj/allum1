/*
** my_displays_line.c for my_display_line in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb 15 14:55:03 2016 jouvel_a
** Last update Fri Feb 19 14:25:34 2016 jouvel_a
*/

#include "include.h"

#define yellow "\033[00;33m"
#define normal "\033[00m"

void	first_line(int matches)
{
  int	index;

  index = 0;
  my_printf("*");
  while (index < 7)
    {
      if (index == 3 && matches == 1)
	{
	  my_printf(yellow "|" normal);
	  index++;
	}
      my_printf(" ");
      index++;
    }
  my_printf("*\n");
}

void	second_line(int matches)
{
  int	index;

  index = 0;
  my_printf("*");
  while (index < 7)
    {
      while (index >= 2 && matches > 0)
	{
	  my_printf(yellow "|" normal);
	  matches--;
	  index++;
	}
      my_printf(" ");
      index++;
    }
  my_printf("*\n");
}

void	third_line(int matches)
{
  int	index;

  index = 0;
  my_printf("*");
  while (index < 7)
    {
      while (index >= 1 && matches > 0)
	{
	  my_printf(yellow "|" normal);
	  matches--;
	  index++;
	}
      my_printf(" ");
      index++;
    }
  my_printf("*\n");
}

void	fourth_line(int matches)
{
  int	index;

  index = 0;
  my_printf("*");
  while (index < 7)
    {
      while (matches > 0)
	{
	  my_printf(yellow "|" normal);
	  matches--;
	  index++;
	}
      if (index < 7)
	my_printf(" ");
      index++;
    }
  my_printf("*\n");
}

int	my_display(int *array)
{
  my_printf("*********\n");
  first_line(array[0]);
  second_line(array[1]);
  third_line(array[2]);
  fourth_line(array[3]);
  my_printf("*********\n");
  return (0);
}
