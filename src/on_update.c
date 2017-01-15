/*
** on_update.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Jan  13 15:22:59 2017
** Last update Sun Jan 15 18:14:26 2017 
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

int		update(t_variable *var,t_map *map, float direction,
		       sfVector2f *pos)
{
  sfRenderWindow_clear(var->window, sfWhite);
  if ((var->buff = my_framebuffer_create(var->width, var->height)) == NULL ||
  (var->sprite = sfSprite_create()) == NULL ||
  (var->texture = sfTexture_create(var->width, var->height)) == NULL)
  return (1);
  sfSprite_setTexture(var->sprite, var->texture, sfTrue);
  draw_env(map, pos, direction, var);
  sfTexture_updateFromPixels(var->texture, var->buff->pixels,
			     var->width, var->height,0,0);
  sfRenderWindow_drawSprite(var->window, var->sprite, NULL);
  sfRenderWindow_display(var->window);
  sfTexture_destroy(var->texture);
  free(var->buff->pixels);
  free(var->buff);
  return (0);
}
