/*
** function_error.c for  in /home/esceve/EPITECH/System_Unix/PSU_2016_my_sokoban/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Tue Dec  13 14:55:58 2016
** Last update Sun Jan 15 18:09:16 2017 
*/

#include	<stdio.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/ioctl.h>
#include	"../includes/include.h"

int		check_arg(int argc, char *arg)
{
  if (argc < 2 || arg == NULL)
    {
      my_putstr("[ERROR] map doesn't loaded. use command './wolf3d [map]'.\n");
      return (84);
    }
  else
    return (0);
}
