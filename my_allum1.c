/*
** my_allum1.c for my_allum1 in /home/jouvel_a/rendu/CPE_2015_Allum1
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb  8 12:03:48 2016 Anthony JOUVEL
** Last update Mon Feb 15 18:56:24 2016 jouvel_a
*/

#include "include.h"

int		error(char *message)
{
  my_printf("%s", message);
  return (42);
}

int		line_test()
{
  int	index;
  int	line;
  char	buffer[100];

  index = 0;
  while (index < 99)
    {
      buffer[index] = ' ';
      index++;
    }
  my_printf("Line: ");
  read(0, buffer, 99);
  index = 0;
  while (buffer[index] != '\n')
    {
      if ((buffer[index] >= '0') && (buffer[index] <= '9'))
	index++;
      else
	return (error("Error: invalid input (positive number expected)\n"));
    }
  line = my_getnbr(buffer);
  if (line > 4 || line == 0)
    return (error("Error: this line is out of range\n"));
  return (line);
}

int		matches_test(int matches)
{
  char	buffer[100];
  int	index;
  int	choice;

  index = 0;
  while (index < 99)
    {
      buffer[index] = ' ';
      index++;
    }
  my_printf("Matches: ");
  read(0, buffer, 99);
  index = 0;
  while (buffer[index] != '\n')
    {
      if ((buffer[index] >= '0') && (buffer[index] <= '9'))
	index++;
      else
	return (error("Error: invalid input (positive number expected)\n"));
    }
  choice = my_getnbr(buffer);
  if (choice == 0)
    return (error("Error: you have to remove at least one matches\n"));
  if (choice > matches)
    return (error("Error: not enough matches on this line\n"));
  return (choice);
}

int		player_turn(int *array)
{
  int		line;
  int		matches;
  int		end;
  static int	test;

  end = array[0] + array[1] + array[2] + array[3];
  while (end != 0)
    {
      if (test == 0)
	my_printf("\nYour turn:\n");
      while ((line = line_test()) == 42);
      line--;
      if ((matches = matches_test(array[line])) == 42)
	{
	  test = 1;
	  return (1);
	}
      my_printf("Player removed %i match(es) from line %i\n", matches,
		line);
      array[line] = array[line] - matches;
      my_display(array);
      end = array[0] + array[1] + array[2] + array[3];
    }
  test = 0;
  return (0);
}

int		main()
{
  int	array[4];

  array[0] = 1;
  array[1] = 3;
  array[2] = 5;
  array[3] = 7;
  my_display(array);
  while (player_turn(array) == 1);
  //  ia_turn(array);
  return (0);
}
