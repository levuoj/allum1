/*
** allum1.h for allum1 in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1/include
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Mon Feb 15 15:00:17 2016 jouvel_a
** Last update Wed Feb 17 14:38:23 2016 jouvel_a
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

int	error(char *message);
int	ending(char *message);
int	matches_test(int matches);
int	line_test();
int	player_turn(int *array);
int	ia_turn(int *array);
void	first_line(int matches);
void	second_line(int matches);
void	third_line(int matches);
void	fourth_line(int matches);
void	my_display(int *array);

#endif /* !ALLUM1_H_ */
