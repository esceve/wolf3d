/*
** raycast.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Mon Jan 09 15:34:29 2017 
** Last update Sun Jan 15 18:16:29 2017 
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
#include	<math.h>

float		raycast(sfVector2f pos, float direction, int **map,
			sfVector2i mapSize)
{
  float		distance;
  float		x_init;
  float		y_init;

  x_init = pos.x;
  y_init = pos.y;
   while (map[(int)(pos.y)][(int)(pos.x)] == 0 &&
          pos.x <= (float)mapSize.x &&
          pos.y <= (float)mapSize.y)
   {
     pos = move_forward(pos, direction, 0.005);
   }
  distance = sqrt(pow(x_init - pos.x, 2) + pow(y_init - pos.y, 2));
  return (distance);
}
