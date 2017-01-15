/*
** handle_status.c for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/srcs
** 
** Made by 
** Login   <esceve@epitech.net>
** 
** Started on  Mon Jan 09 14:54:28 2017 
** Last update Sun Jan 15 18:09:39 2017 
*/

#include	"../includes/include.h"

void		handle_status(int status_code)
{
  if (status_code == 0)
    my_putstr("[INFO]Success.\n");
  if (status_code == 1)
    my_putstr("[INFO]Error.\n");
  if (status_code == 2)
    my_putstr("[INFO] Program star\n");
  if (status_code == 3)
    my_putstr("[INFO] Program end\n");
  if (status_code == 4)
    my_putstr("Please specify a map in argument. Ex: './wold3d map'.\n");
}
