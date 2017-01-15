/*
** struct.h for struc CSFML in /home/scherp_c/EPITECH/C_Graphical_programing/Bootstrap_CSFML
**
** Made by clement scherpereel
** Login clement.scherpereel@epitech.eu <clement.scherpereel@epitech.eu>
**
** Started on  Mar Nov 8 15:11:09 2016 clement scherpereel
** Last update Sun Jan 15 17:56:12 2017 
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <SFML/Graphics/RenderWindow.h>
#include <stdlib.h>

typedef struct s_my_framebuffer
{
  sfUint8		*pixels;
  int			width;
  int			height;
}			t_my_framebuffer;

#endif /*STRUCT_H_*/
