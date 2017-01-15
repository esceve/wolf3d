/*
** frame_malloc.c for frame malloc in /home/scherp_c/EPITECH/C_Graphical_programing/Bootstrap_CSFML
**
** Made by clement scherpereel
** Login clement.scherpereel@epitech.eu <clement.scherpereel@epitech.eu>
**
** Started on  Mar Nov 8 15:55:30 2016 clement scherpereel
** Last update May Nov 10 10:53:28 2016 clement scherpereel
*/

#include		<SFML/Graphics/RenderWindow.h>
#include		"../includes/struct.h"
#include		<stdlib.h>
#include		"../includes/include.h"



t_my_framebuffer	*my_framebuffer_create(int width, int height)
{
  int			i;
  t_my_framebuffer	*pixels;

  i = 0;
  pixels = malloc(sizeof(t_my_framebuffer));
  pixels->pixels = malloc(sizeof(pixels->pixels) * width * height * 4);
  pixels->width = width;
  pixels->height = height;
  while (i < width * height * 4)
    {
      pixels->pixels[i] = 0;
      i++;
    }
  if (pixels == NULL)
    return (0);
  return (pixels);
}
