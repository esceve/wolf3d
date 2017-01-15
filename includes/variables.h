/*
** variables.h for wolf3ed in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/includes
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Fri Jan  13 15:41:37 2017 
** Last update Sun Jan 15 17:59:34 2017 
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

#ifndef		VARIABLE_H_
#define		VARIABLE_H_

typedef struct			s_variable
{
  t_my_framebuffer		*buff;
  sfSprite			*sprite;
  sfTexture			*texture;
  int				height;
  int				width;

  sfVector2i		from;
  sfVector2i		to;
  sfRenderWindow	*window;
}				t_variable;

#endif		/*VARIABLE_H_*/
