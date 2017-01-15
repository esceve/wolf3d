/*
** var_map.h for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/includes
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Sun Jan 15 17:56:40 2017 
** Last update Sun Jan 15 17:58:43 2017 
*/

#include	<SFML/Graphics/RenderWindow.h>
#include	<stdlib.h>

#ifndef		VAR_MAP_H_
#define		VAR_MAP_H_

typedef struct	s_map
{
  int		**map;

  sfVector2i	mapSize;
}		t_map;

#endif		/*VAR_MAP_H_*/
