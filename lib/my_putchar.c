/*
** my_putchar.c for  in /home/jouvel_a/library
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Oct  6 18:12:29 2015 Anthony JOUVEL
** Last update Tue Feb  2 14:11:30 2016 Anthony JOUVEL
*/

#include "../include/my.h"
#include "../include/include.h"

void	my_putchar(char d)
{
  write(1, &d, 1);
}
