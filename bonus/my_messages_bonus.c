/*
** my_messages.c for my_messages in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb 15 20:43:12 2016 jouvel_a
** Last update Fri Feb 26 15:02:24 2016 jouvel_a
*/

#include "include.h"
#include "allum1.h"

#define red "\033[00;31m"
#define magenta "\033[01;35m"
#define blue "\033[00;34m"
#define normal "\033[00m"
#define bold "\033[01m"

void	player_1_message_turn(int pvp)
{
  if (pvp == 0)
    my_printf(blue "\nCookie Monster turn:\n" normal);
  else
    my_printf(blue "\nYour turn:\n" normal);
}

void	player_1_message_end(int pvp, unsigned int matches, unsigned int line)
{
  if (pvp == 0)
    my_printf(blue bold "Cookie Monster removed %i match(es) from line %i\n"
	      normal, matches, line + 1);
  else
    my_printf(blue bold "Player removed %i match(es) from line %i\n" normal,
      matches, line + 1);
}

int	error(char *message, int nb)
{
  if (nb == 10)
    my_printf(red bold "%s" normal, message);
  else
    my_printf(red "%s" normal, message);
  return (nb);
}

int	ending_bonus(int looser, int pvp)
{
  char	*message;

  if (pvp == 0)
    {
      if (looser == 2)
	message = "Cookie Monster wins\nI WILL EAT YOU\n\n";
      else if (looser == 1)
	message = "Kermit wins\nFUCK YOU I'M A FROG\n\n";
    }
  else
    {
      if (looser == 1)
	message = "You lost, too bad..\n\n";
      else if (looser == 2)
	message = "I lost.. snif.. but I’ll get you next time!!\n\n";
    }
  my_printf(magenta bold "%s" normal, message);
  return (0);
}
