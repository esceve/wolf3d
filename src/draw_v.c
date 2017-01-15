/*
** draw_v.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Tue Jan  10 14:52:29 2017 
** Last update Sun Jan 15 18:05:52 2017 
*/

#include	<SFML/Graphics/RenderWindow.h>
#include	<SFML/Graphics/Sprite.h>
#include	<SFML/Graphics/Texture.h>
#include	"../includes/struct.h"
#include	"../includes/include.h"
#include	"../includes/position.h"
#include	<stdio.h>
#include	<stdlib.h>

int		draw_v(t_my_framebuffer *buffer, sfVector2i *from, sfVector2i *to, sfColor color)
{
  int		y;

  y = from->y;
  if (from->x != to->x)
  {
    my_putstr("Not vertical\n");
    return (EXIT_FAILURE);
  }
  while(y != to->y)
    {
      my_put_pixel(buffer, from->x, y, color);
      y += (y < to->y ? 1 : -1);
    }
  return (EXIT_SUCCESS);
}
