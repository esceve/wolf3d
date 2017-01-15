/*
** move_backward.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/src
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Sat Jan  14 23:05:45 2017 
** Last update Sat Jan  14 23:05:45 2017 
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

sfVector2f	move_backward(sfVector2f pos, float direction, float distance)
{
  direction = fmodf(direction, 360);
  pos.x -= distance * cos((direction * M_PI) / 180);
  pos.y -= distance * sin((direction * M_PI) / 180);
  return (pos);
}