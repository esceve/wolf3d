/*
** main.c for wolf3D in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Mon Jan  2 15:33:10 2017
** Last update Tue Jan 10 12:15:53 2017 
*/

#include	<SFML/Graphics/RenderWindow.h>
#include	<SFML/Graphics/Sprite.h>
#include	<SFML/Graphics/Texture.h>
#include	"../includes/struct.h"
#include	"../includes/include.h"
#include	"../includes/position.h"
#include	<stdio.h>
#include	<stdlib.h>

int		my_draw_line(t_my_framebuffer *buffer, sfVector2i *from,
			     sfVector2i *to, sfColor color)
{
  if ((from->x == to->x) && (from->y != to->y))
      {
  if (draw_v(buffer, from, to, color) == EXIT_FAILURE)
    return (EXIT_FAILURE);
  }
   else if ((from->y == to->y) && (from->x != to->x))
       {
       if (draw_v(buffer, from, to, color) == EXIT_FAILURE)
    return (EXIT_FAILURE);
     }
  return (EXIT_SUCCESS);
}
