/*
** init_display.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Wed Jan  4 20:57:40 2017
** Last update Sun Jan 15 18:10:50 2017 
*/

#include		<SFML/Graphics/RenderWindow.h>
#include		<SFML/Graphics/Sprite.h>
#include		<SFML/Graphics/Texture.h>
#include		<stdlib.h>
#include		<stdio.h>
#include		<fcntl.h>
#include		<sys/ioctl.h>
#include		<unistd.h>
#include		"../includes/include.h"
#include		"../includes/position.h"
#include		"../includes/struct.h"
#include		"../includes/variables.h"
#include		"../includes/var_map.h"

static int		display(t_variable *var, t_map *map)
  {
    int			moved;
    sfEvent		event;
    sfVector2f		pos;
    float		direction;
    float		distance;

    moved = 1;
    pos.x = 2;
    pos.y = 2;
    direction = 0;
    distance = 0.05;
    while (sfRenderWindow_isOpen(var->window))
      {
	while (sfRenderWindow_pollEvent(var->window, &event))
	  {
	    if (event.type == sfEvtClosed)
	      sfRenderWindow_close(var->window);
	    check_moves(&pos, &direction, &distance, &moved);
	    check_direction(&pos, &direction, &distance, &moved);
	  }
	if (moved == 1)
	  update(var, map, direction, &pos);
	moved = 0;
      }
    return (0);
  }

int			sfml(t_map *map)
{
  sfVideoMode		mode;
  t_variable		var;

  init_screen(&mode);
  if (init_variables(&var, &mode) == 1)
    return (1);
  display(&var, map);
  sfRenderWindow_destroy(var.window);
  return (0);
}


