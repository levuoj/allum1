/*
** allum1.h for allum1 in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1/include
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb 15 15:00:17 2016 jouvel_a
** Last update Fri Feb 19 15:59:34 2016 jouvel_a
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

int	error(char *message, int nb);
int	ending(char *message);
int	matches_test(unsigned int matches);
int	line_test(int *array);
int	player_turn(int *array);
int	ia_turn(int *array);
void	first_line(int matches);
void	second_line(int matches);
void	third_line(int matches);
void	fourth_line(int matches);
int	my_display(int *array);

#endif /* !ALLUM1_H_ */
