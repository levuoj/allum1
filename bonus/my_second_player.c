/*
** my_second_player.c for my_second_player in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Fri Feb 26 02:59:04 2016 jouvel_a
** Last update Fri Feb 26 14:27:23 2016 jouvel_a
*/

#include "include.h"
#include "allum1_bonus.h"

#define green "\033[00;32m"
#define normal "\033[00m"
#define bold "\033[01m"

int		player2_turn(int *array)
{
  unsigned int	line;
  unsigned int	matches;
  static int	test;

  if (test == 0)
    my_printf(green "Kermit turn:\n" normal);
  while ((line = line_test(array, green)) >= 15)
    {
      if (line == 15)
	return (error("Error : do not use 'echo | ./allum1'\n", 10));
    }
  line--;
  if ((matches = matches_test(array[line], green)) == 42)
    {
      test = 1;
      return (1);
    }
  my_printf(green bold "Kermit removed %i match(es) from line %i\n" normal,
	    matches, line + 1);
  array[line] = array[line] - matches;
  my_display(array);
  test = 0;
  return (0);
}

int		my_second_player(char *option, int test_error, int *array)
{
  if (option == NULL)
    ia_turn(array);
  else if (my_same_str(option, "pvp") == 1)
    ia_turn(array);
  else
    {
      while ((test_error = player2_turn(array)) != 0)
	{
	  if (test_error == 10)
	    return (42);
	}
    }
  return (0);
}
