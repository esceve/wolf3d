/*
** draw_h.c for wolf3D in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Mon Jan  2 10:59:18 2017
** Last update Sun Jan 15 18:05:18 2017 
*/

#include	<SFML/Graphics/RenderWindow.h>
#include	<SFML/Graphics/Sprite.h>
#include	<SFML/Graphics/Texture.h>
#include	"../includes/struct.h"
#include	"../includes/include.h"
#include	"../includes/position.h"
#include	<stdio.h>
#include	<stdlib.h>

int		draw_h(t_my_framebuffer *buffer, sfVector2i *from,
		       sfVector2i *to, sfColor color)
{
  int x;

  x = from->x;
  if (from->y != to->y)
  {
    my_putstr("Not horizontal\n");
    return (EXIT_FAILURE);
  }
  while(x != to->x)
    {
      my_put_pixel(buffer, x, from->y, color);
      x += (x < to->x ? 1 : -1);
    }
  return (EXIT_SUCCESS);
}
