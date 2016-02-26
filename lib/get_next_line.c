/*
** get_next_line.c for get_next_line in /home/jouvel_a/rendu/allum1/CPE_2015_Allum1/lib
**
** Made by jouvel_a
** Login   <jouvel_a@epitech.net>
**
** Started on  Fri Feb 26 01:23:57 2016 jouvel_a
** Last update Fri Feb 26 02:47:11 2016 jouvel_a
*/

#include "include.h"
#include "get_next_line.h"

int		bag_end(char *buffer, char **save,  int ret, int *inf)
{
  int		index;

  index = 0;
  if ((*inf) == 2)
    {
      if (empty_buffer(&buffer, save, ret, inf) == 2)
	return (2);
      return (1);
    }
  if (ret < READ_SIZE)
    (*inf) = 2;
  while ((buffer[index] != '\n' && buffer[index] != '\0') && index < ret)
    index++;
  return (index);
}

int		saver(char *buffer, char **save, int ret, int inf)
{
  static int	index1;
  int		index2;

  index2 = 0;
  if (READ_SIZE == 0)
    return (1);
  if (((*save) = my_realloc((*save), (index1 + ret))) == NULL)
    return (1);
  while (index2 < ret)
    {
      (*save)[index1] = buffer[index2];
      index1++;
      index2++;
    }
  if (inf != 0)
    index1 = 0;
  return (0);
}

char		*my_realloc(char *save, int size)
{
  int		index;
  char		*new;

  index = 0;
  new = NULL;
  if (save == NULL)
    {
      if ((save = malloc(sizeof(char) * (size + 1))) == NULL)
	return (NULL);
      save[size] = '\0';
      return (save);
    }
  if ((new = malloc(sizeof(char) * (size + 1))) == NULL)
    return (NULL);
  new[size] = '\0';
  while (index < size)
    {
      new[index] = save[index];
      index = index + 1;
    }
  free(save);
  return (new);
}

int		empty_buffer(char **buffer, char **save, int ret, int *inf)
{
  static int	index[2];

  if ((*buffer) == NULL)
    {
      if (((*buffer) = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
	return (1);
      (*buffer)[READ_SIZE] = '\0';
    }
  else if (ret < READ_SIZE || index[1] < ret)
    {
      while ((*buffer)[index[0]] != '\n' && (*buffer)[index[0]] != '\0')
	index[0]++;
      index[0]++;
      index[1] = index[0];
      while ((*buffer)[index[1]] != '\n' && (*buffer)[index[1]] != '\0')
	index[1]++;
      if (index[1] < READ_SIZE && (*inf) != 2)
	(*inf) = 1;
      if (saver(&*buffer[index[0]], save, index[1] - index[0], *inf) == 1)
	return (1);
      if (index[1] < READ_SIZE)
	return (2);
    }
  index[0] = 0;
  return (0);
}

char		*get_next_line(const int fd)
{
  static char	*buffer;
  char		*save;
  static int	ret;
  static int	inf;

  if (inf == 2)
    {
      if (bag_end(buffer, &save, ret, &inf) == 2)
	return (save);
      return (NULL);
    }
  save = NULL;
  inf = 0;
  if (empty_buffer(&buffer, &save, ret, &inf) == 1)
    return (NULL);
  while (inf == 0)
    {
      if ((ret = read(fd, buffer, READ_SIZE)) <= 0)
	return (NULL);
      if ((ret = bag_end(buffer, &save, ret, &inf)) != READ_SIZE && inf != 2)
	inf = 1;
      if (saver(buffer, &save, ret, inf) == 1)
	return (NULL);
    }
  return (save);
}
