/*
** my_message2_bonus.c for  in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1/bonus
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Fri Feb 26 14:35:09 2016 jouvel_a
** Last update Fri Feb 26 14:41:21 2016 jouvel_a
*/

#include "allum1_bonus.h"
#include "include.h"

#define green "\033[00;32m"
#define blue "\033[00;34m"
#define normal "\033[00m"


void	line_message(char *color)
{
  if (my_same_str(color, blue) == 0)
    my_printf(blue "Line: " normal);
  else
    my_printf(green "Line: " normal);
}


void	matches_message(char *color)
{
  if (my_same_str(color, blue) == 0)
    my_printf(blue "Matches: " normal);
  else
    my_printf(green "Matches: " normal);
}
