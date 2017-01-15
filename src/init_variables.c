/*
** init_variables.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Thu Jan  5 16:20:09 2017
** Last update Sun Jan 15 18:11:58 2017 
*/

#include	<SFML/Graphics/RenderWindow.h>
#include	<SFML/Graphics/Texture.h>
#include	<SFML/Graphics/Sprite.h>
#include	<sys/ioctl.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	<fcntl.h>
#include	"../includes/position.h"
#include	"../includes/include.h"
#include	"../includes/struct.h"
#include	"../includes/variables.h"

int		init_variables(t_variable *var, sfVideoMode *mode)
{
  if((var->window = sfRenderWindow_create(*mode, "Wolf 3D", sfResize |
					  sfClose, NULL)) == NULL)
    return (1);
  var->buff = NULL;
  var->sprite = NULL;
  var->texture = NULL;
  var->width = mode->width;
  var->height = mode->height;
  var->from.x = 0;
  var->to.x = 0;
  var->from.y = 0;
  var->to.y = 0;
  return (0);
}
