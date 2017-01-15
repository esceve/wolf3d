/*
** main.c for CSFML in /home/scherp_c/EPITECH/C_Graphical_programing/Bootstrap_CSFML
**
** Made by clement scherpereel
** Login <clement.scherpereel@epitech.eu>
**
** Started on  Tue Nov 08 14:15:50 2016 clement scherpereel
** Last update Sun Jan 15 18:12:38 2017 
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

int		main(int ac, char **av)
{
  t_map		map;
  int		status;

  status = 84;
  if (ac > 1 && all_check(ac, av[1]) == 0)
    {
      my_putstr("[DEBUG] Program start !\n");
      if ((map.map = parser(split(read_file(av[1]), '\n'), "01", 
			    &(map.mapSize.x), &(map.mapSize.y))) != NULL)
	{
	  my_putstr("[DEBUG] map is ok\n");
	  status = 0;
	}
      else
	my_putstr("[DEBUG] Incorrect map !\n");
    }
  else
    {
      status = 1;
      handle_status(4);
    }
  if (status == 0)
    sfml(&map);
  handle_status(status);
  return (status == 0 ? 0 : 84);
}
