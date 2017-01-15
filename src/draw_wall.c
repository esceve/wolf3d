/*
** draw_wall.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Tue Jan 10 14:48:22 2017
** Last update Sun Jan 15 18:08:27 2017 
*/

#include	<SFML/Graphics/RenderWindow.h>
#include	<SFML/Graphics/Sprite.h>
#include	<SFML/Graphics/Texture.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<fcntl.h>
#include	<sys/ioctl.h>
#include	<unistd.h>
#include	"../includes/include.h"
#include	"../includes/position.h"
#include	"../includes/struct.h"
#include	"../includes/variables.h"


void		draw_env(t_map *map, sfVector2f *pos, float direction,
			 t_variable *var)
{
  float		distance;
  int		height_wall;
  int		start_print;
  int		end_print;
  int		x;

  x = -1;
  direction -= FOV / 2;
  while (++x != var->width)
    {
      distance = raycast(*pos, direction, map->map, map->mapSize);
      height_wall = (var->height / (2 * distance));
      start_print = (var->height / 2) - (height_wall / 2);
      end_print = start_print + height_wall;
      var->from.y = start_print;
      if (var->from.y > var->height)
	var->from.y = 0;
      var->from.x = x;
      var->to.y = end_print;
      if (var->to.y > var->height)
	var->to.y = var->height;
      var->to.x = x;
      draw_v(var->buff, &(var->from), &(var->to), sfRed);
      direction += (FOV / var->height);
    }
}
