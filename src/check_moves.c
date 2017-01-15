/*
** check_moves.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/src
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Fri Jan  13 15:13:42 2017
** Last update Sun Jan 15 18:04:07 2017 
*/

#include		<SFML/Graphics/RenderWindow.h>
#include		<SFML/Graphics/Sprite.h>
#include		<SFML/Graphics/Texture.h>
#include		<stdlib.h>
#include		<stdio.h>
#include		<fcntl.h>
#include		<sys/ioctl.h>
#include		<unistd.h>
#include		"../includes/include.h"
#include		"../includes/position.h"
#include		"../includes/struct.h"
#include		"../includes/variables.h"

void		check_moves(sfVector2f *pos, float *direction, float *distance, int *moved)
{
  if (sfKeyboard_isKeyPressed(sfKeyUp) == sfTrue)
    {
      my_putstr("[INFO] Key up pressed.\n");
      *pos = move_forward(*pos, *direction, *distance);
      *moved = 1;
    }

  if (sfKeyboard_isKeyPressed(sfKeyDown) == sfTrue)
    {
      my_putstr("[INFO] Key down pressed.\n");
      *pos = move_backward(*pos, *direction, *distance);
      *moved = 1;
    }
}

void		check_direction(sfVector2f *pos, float *direction, float *distance, int *moved)
{
  if (sfKeyboard_isKeyPressed(sfKeyLeft) == sfTrue)
    {
      my_putstr("[INFO] Key left pressed.\n");
      *direction -= 2;
      *pos = move_left(*pos, *direction, *distance);
      *moved = 1;
    }

  if (sfKeyboard_isKeyPressed(sfKeyRight) == sfTrue)
    {
      my_putstr("[INFO] Key right pressed.\n");
      *direction += 2;
      *pos = move_right(*pos, *direction, *distance);
      *moved = 1;
    }
}
