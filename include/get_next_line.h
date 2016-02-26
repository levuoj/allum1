/*
** get_next_line.h for get_next_line in /home/jouvel_a/rendu/getnextline/CPE_2015_getnextline
**
** Made by Anthony JOUVEL
** Login   <jouvel_a@epitech.net>
**
** Started on  Tue Jan 12 16:08:21 2016 Anthony JOUVEL
** Last update Fri Feb 26 02:25:34 2016 jouvel_a
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

#ifndef READ_SIZE
# define READ_SIZE (1)
#endif /* !READ_SIZE */

int		bag_end(char *buffer, char **save,  int ret, int *inf);
int		saver(char *buffer, char **save, int ret, int inf);
char		*my_realloc(char *save, int size);
int		empty_buffer(char **buffer, char **save, int ret, int *inf);
char		*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H_ */
