/*
** buffing_map.c for my_sokoban in /home/esceve/EPITECH/System_Unix/PSU_2016_my_sokoban/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Mon Dec  12 20:10:05 2016
** Last update Sun Jan 15 18:17:13 2017 
*/

#include	<stdio.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"../includes/include.h"
#include	"../includes/variables.h"

int		size_to_delim(const char *buffer, const char delimiter)
{
  int		i;

  i = 0;
  if (buffer == NULL)
    return (0);
  while (buffer[i] != '\0' && buffer[i] != delimiter)
    i++;
  return (i);
}

int		count_chunks(const char *buffer, const char delimiter)
{
  int		i;
  int		j;

  i = 0;
  j = 1;
  if (buffer == NULL)
    return (0);
  while (buffer[i] != '\0')
    {
      if (buffer[i] == delimiter)
	j++;
      i++;
    }
  return (j);
}

static char	**buffing(const char *buffer, char **matrix,
const char delimiter)
  {
    size_t	i;
    size_t	y;
    size_t	x;

    x = 0;
    y = 0;
    i = (size_t)-1;
    if (!(matrix[y] = malloc(sizeof(char) * (size_to_delim(buffer + i + 1,
    delimiter) + 1))))
    return (NULL);
    while (buffer[++i] != '\0')
      if (buffer[i] == delimiter)
      {
	matrix[y][x] = '\0';
	x = 0;
	if (!(matrix[++y] = malloc(sizeof(char) *
	(size_to_delim(buffer + i + 1,
	delimiter) + 1))))
	return (NULL);
      }
    else
      matrix[y][x++] = buffer[i];
    matrix[y][x] = '\0';
    return (matrix);
  }

char		**split(const char *buffer, const char delimiter)
{
  int		i;
  int		chunk_count;
  char		**matrix;

  i = -1;
  matrix = NULL;
  if (buffer == NULL || size_to_delim(buffer, delimiter) == 0)
    return (NULL);
  chunk_count = count_chunks(buffer, delimiter);
  if ((matrix = malloc(sizeof(char *) * (chunk_count + 1))) == NULL)
    return (NULL);
  while (++i < chunk_count + 1)
    matrix[i] = NULL;
  return (buffing(buffer, matrix, delimiter));
}
