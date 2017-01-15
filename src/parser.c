/*
** parser.c for header in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Jan  6 15:00:49 2017
** Last update Sun Jan 15 18:15:33 2017 
*/

#include		<stdlib.h>
#include		<stdio.h>
#include		<string.h>
#include		"../includes/include.h"

static const char	*my_strchr(const char *haystack, const char needle)
{
  int			i;

  i = 0;
  while (haystack[i] != '\0')
    {
      if (haystack[i] == needle)
	return (haystack + i);
      i++;
    }
  return (NULL);
}

void			free_matrix(char **matrix)
{
  int			j;

  if (matrix != NULL)
    {
      j = 0;
      while (matrix[j] != NULL)
	{
	  free(matrix[j]);
	  j++;
	}
      free(matrix);
    }
}

int			**transform(char **matrix)
{
  int			i;
  int			chunk;
  int			**map;

  i = -1;
  map = 0;
  chunk = size_matrix(matrix);
  if (matrix == NULL)
    return (NULL);
  if ((map = malloc(sizeof(int *) * (chunk + 1))) == NULL)
    return (NULL);
  while (++i < chunk + 1)
    map[i] = NULL;
  return (mapping(map, matrix));
}

static int		*checker(char **matrix, const char *values)
{
  int			i;
  int			j;

  j = 0;
  while (matrix[j] != NULL)
    {
      i = 0;
      while (matrix[j][i] != '\0')
	{
	  if (my_strchr(values, matrix[j][i]) != NULL)
	    i++;
	  else
	    return (NULL);
	}
      j++;
    }
  return (NULL);
}

int			**parser(char **matrix, const char *values, int *x, int *y)
{
  int		i;
  int		**map;

  i = 0;
  map = NULL;
  if (matrix != NULL)
    {
      while (matrix[i])
	i++;
      *y = i;
      if (*y > 0)
	*x = my_strlen(matrix[0]);
      checker(matrix, values);
      map = transform(matrix);
      free_matrix(matrix);
    }
  return (map);
}
