/*
** my_allum1.c for my_allum1 in /home/jouvel_a/rendu/CPE_2015_Allum1
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb  8 12:03:48 2016 Anthony JOUVEL
** Last update Fri Feb 26 14:37:55 2016 jouvel_a
*/

#include "include.h"
#include "allum1_bonus.h"

#define green "\033[00;32m"
#define blue "\033[00;34m"
#define normal "\033[00m"
#define bold "\033[01m"

int		line_test(int *array, char *color)
{
  unsigned int	index;
  unsigned int	line;
  char		buffer[999];

  index = 0;
  line_message(color);
  if (read(0, buffer, 1000) <= 0)
    return (error("Error: read has failed\n", 15));
  if (buffer[0] == '\n')
    return (error("Error: invalid input (positive number expected)\n", 42));
  while (buffer[index] != '\n')
    {
      if ((buffer[index] >= '0') && (buffer[index] <= '9'))
	index++;
      else
	return (error("Error: invalid input (positive number expected)\n", 42));
    }
  line = my_getnbr(buffer);
  if (line > 4 || line == 0)
    return (error("Error: this line is out of range\n", 42));
  if (array[line -1] == 0)
    return (error ("Error: this line is empty\n", 42));
  return (line);
}

int		matches_test(unsigned int matches, char *color)
{
  char		buffer[999];
  unsigned int	index;
  unsigned int	choice;

  index = 0;
  matches_message(color);
  if (read(0, buffer, 1000) <= 0)
    return (error("Error: read has failed", 42));
  if (buffer[0] == '\n')
    return (error("Error: invalid input (positive number expected)\n", 42));
  while (buffer[index] != '\n')
    {
      if ((buffer[index] >= '0') && (buffer[index] <= '9'))
	index++;
      else
	return (error("Error: invalid input (positive number expected)\n", 42));
    }
  choice = my_getnbr(buffer);
  if (choice == 0)
    return (error("Error: you have to remove at least one match\n", 42));
  if (choice > matches)
    return (error("Error: not enough matches on this line\n", 42));
  return (choice);
}

int		player_turn(int *array, int pvp)
{
  unsigned int	line;
  unsigned int	matches;
  static int	test;

  if (test == 0)
    player_1_message_turn(pvp);
  while ((line = line_test(array, blue)) >= 15)
    {
      if (line == 15)
	return (error("Error : do not use 'echo | ./allum1'\n", 10));
    }
  line--;
  if ((matches = matches_test(array[line], blue)) == 42)
    {
      test = 1;
      return (1);
    }
  player_1_message_end(pvp, matches, line);
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
  my_printf(green "AI's turn...\n" normal);
  my_printf(green bold"AI removed %i match(es) from line %i\n" normal,
	    line_matches[1], line_matches[0] + 1);
  return (my_display(array));
}

int		main(int ac, char **av)
{
  int		array[4] = {1, 3, 5, 7};
  int		test_error;
  int		pvp;

  my_display(array);
  if (av[1] == NULL)
    pvp = 1;
  else
    pvp = my_same_str(av[1], "pvp");
  while (42)
    {
      while ((test_error = player_turn(array, pvp)) != 0)
	{
	  if (test_error == 10)
	    return (42);
	}
      if ((array[0] + array[1] + array[2] + array[3]) == 0)
	return (ending_bonus(1, pvp));
      my_printf("\n");
      if ((my_second_player(av[1], test_error, array)) == 42)
	return (42);
      if ((array[0] + array[1] + array[2] + array[3]) == 0)
	return (ending_bonus(2, pvp));
    }
}
