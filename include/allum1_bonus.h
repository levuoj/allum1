/*
** allum1_bonus.h for  in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Fri Feb 26 03:47:49 2016 jouvel_a
** Last update Fri Feb 26 14:39:59 2016 jouvel_a
*/

#ifndef ALLUM1_BONUS_H_
# define ALLUM1_BONUS_H_

int	error(char *message, int nb);
int	ending_bonus(int looser, int pvp);
int	matches_test(unsigned int matches, char *color);
int	line_test(int *array, char *color);
int	player_turn(int *array, int pvp);
int	ia_turn(int *array);
void	first_line(int matches);
void	second_line(int matches);
void	third_line(int matches);
void	fourth_line(int matches);
int	my_display(int *array);
int	player_1_message_turn(int pvp);
int	player_1_message_end(int pvp, unsigned int matches, unsigned int line);
int	player2_turn(int *array);
int	my_second_player(char *option, int test_error, int *array);
void	line_message(char *color);
void	matches_message(char *color);

#endif /* ALLUM1_BONUS_H_ */
