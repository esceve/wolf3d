/*
** my_put_pixel.c for wireframe in /home/esceve/EPITECH/C_Graphical_programing/wireframe/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Thu Dec  8 19:17:24 2016
** Last update Thu Dec  8 19:17:24 2016
*/

#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/Texture.h>
#include "../includes/struct.h"
#include <stdlib.h>
#include "../includes/include.h"
#include <stdio.h>

void my_put_pixel(t_my_framebuffer *buffer, int x, int y, sfColor color)
{
  buffer->pixels[(buffer->width * y + x)  * 4] = color.r;
  buffer->pixels[(buffer->width * y + x) * 4 + 1] = color.g;
  buffer->pixels[(buffer->width * y + x) * 4 + 2] = color.b;
  buffer->pixels[(buffer->width * y + x) * 4 + 3] = color.a;
}