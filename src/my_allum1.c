/*
** my_allum1.c for my_allum1 in /home/jouvel_a/rendu/CPE_2015_Allum1
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb  8 12:03:48 2016 Anthony JOUVEL
** Last update Fri Feb 26 04:01:32 2016 jouvel_a
*/

#include "include.h"
#include "allum1.h"

int		line_test(int *array)
{
  unsigned int	index;
  unsigned int	line;
  char		*buffer;

  index = 0;
  my_printf("Line: ");
  if ((buffer = get_next_line(0)) == NULL)
    return (15);
  if (buffer[0] == '\0')
    return (error("Error: invalid input (positive number expected)\n", 42));
  while (buffer[index] != '\0')
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

int		matches_test(unsigned int matches)
{
  char		*buffer;
  unsigned int	index;
  unsigned int	choice;

  index = 0;
  my_printf("Matches: ");
  if ((buffer = get_next_line(0)) == NULL)
    return (42);
  if (buffer[0] == '\0')
    return (error("Error: invalid input (positive number expected)\n", 42));
  while (buffer[index] != '\0')
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

int		player_turn(int *array)
{
  unsigned int	line;
  unsigned int	matches;
  static int	test;

  if (test == 0)
    my_printf("\nYour turn:\n");
  while ((line = line_test(array)) >= 15)
    {
      if (line == 15)
	return (error("Error: not enough matches on this line\n", 42));
    }
  line--;
  if ((matches = matches_test(array[line])) == 42)
    {
      test = 1;
      return (1);
    }
  my_printf("Player removed %i match(es) from line %i\n", matches, line + 1);
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
  my_printf("AI's turn...\n");
  my_printf("AI removed %i match(es) from line %i\n", line_matches[1],
	    line_matches[0] + 1);
  return (my_display(array));
}

int		main()
{
  int		array[4] = {1, 3, 5, 7};
  int		end;
  int		test_error;

  my_display(array);
  end = array[0] + array[1] + array[2] + array[3];
  while (42)
    {
      while ((test_error = player_turn(array)) != 0)
	{
	  if (test_error == 42)
	    return (42);
	}
      end = array[0] + array[1] + array[2] + array[3];
      if (end == 0)
	return (ending("You lost, too bad..\n\n"));
      my_printf("\n");
      ia_turn(array);
      end = array[0] + array[1] + array[2] + array[3];
      if (end == 0)
	return (ending("I lost.. snif.. but I'll get you next time!!\n\n"));
    }
}
