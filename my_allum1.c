/*
** my_allum1.c for my_allum1 in /home/jouvel_a/rendu/CPE_2015_Allum1
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb  8 12:03:48 2016 Anthony JOUVEL
** Last update Thu Feb 18 13:48:35 2016 jouvel_a
*/

#include "include.h"

int		line_test(int *array)
{
  unsigned int	index;
  unsigned int	line;
  char		buffer[1000];

  index = 0;
  my_printf("Line: ");
  if (read(0, buffer, 999) == -1)
    return (error("Error: read has failed"));
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
  if (array[line -1] == 0)
    return (error ("Error: this line is empty\n"));
  return (line);
}

int		matches_test(int matches)
{
  char		buffer[100];
  int		index;
  int		choice;

  index = 0;
  my_printf("Matches: ");
  if (read(0, buffer, 99) == -1)
    return (error("Error: read has failed"));
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
  static int	test;

  if (test == 0)
    my_printf("\nYour turn:\n");
  while ((line = line_test(array)) == 42);
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
  test = 0;
  return (0);
}

int		ia_turn(int *array)
{
  int		line_matches[2] = {3, 0};
  int		test;

  test = 0;
  while (test == 0)
    {
      if (array[line_matches[0]] != 0)
	{
	  line_matches[1] = array[line_matches[0]];
	  test = 1;
	}
      else
	line_matches[0]--;
    }
  if (line_matches[1] > 1)
    {
      array[line_matches[0]] = 1;
      line_matches[1]--;
    }
  else
    array[line_matches[0]] = 0;
  my_printf("AI's turn...\nAI removed %i match(es) from line %i\n",
	    line_matches[1], line_matches[0] + 1);
  my_display(array);
  return (0);
}

int		main()
{
  int		array[4];
  int		end;

  array[0] = 1;
  array[1] = 3;
  array[2] = 5;
  array[3] = 7;
  my_display(array);
  end = array[0] + array[1] + array[2] + array[3];
  while (42)
    {
      while (player_turn(array) == 1);
      end = array[0] + array[1] + array[2] + array[3];
      if (end == 0)
	return (ending("You lost, too bad..\n"));
      my_printf("\n");
      ia_turn(array);
      end = array[0] + array[1] + array[2] + array[3];
      if (end == 0)
	return (ending("I lost.. snif.. but I’ll get you next time!!\n"));
    }
}
