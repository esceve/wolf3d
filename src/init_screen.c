/*
** init_screen.c for  in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Wed Jan  4 21:37:57 2017
** Last update Sun Jan 08 21:55:43 2017 
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

void		init_screen(sfVideoMode *mode)
{
  mode->width = 800;
  mode->height = 600;
  mode->bitsPerPixel = 32;
}