/*
** splitter_int.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Sun Jan 08 21:59:55 2017 
** Last update Sun Jan 15 18:18:07 2017 
*/

#include		<stdio.h>
#include		<fcntl.h>
#include		<unistd.h>
#include		<stdlib.h>
#include		<math.h>
#include		"../includes/include.h"

int			size_matrix(char **matrix)
{
  int			i;

  i = 0;
  if (matrix == NULL)
    return (0);
  while (matrix[i] != NULL)
    i++;
  return (i);
}

int			**mapping(int **map, char **matrix)
{
  int			x;
  int			y;

  y = 0;
  x = 0;
  if (!(map[y] = malloc(sizeof(int) * (my_strlen(matrix[y]) + 1))))
    return (0);
  while (matrix[y] != NULL)
    {
      if (matrix[y][x] == '\0')
        {
	  x = 0;
	  y++;
	  if (matrix[y] != NULL &&
	      !(map[y] = malloc(sizeof(int) * (my_strlen(matrix[y])))))
	    return (NULL);
        }
      else
      {
	map[y][x] = matrix[y][x] - '0';
	x++;
      }
    }
      return (map);
}
