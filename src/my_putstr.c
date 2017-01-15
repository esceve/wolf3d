/*
** my_putstr.c for  in /home/scherp_c/CPool_Day04
** 
** Made by clement scherpereel
** Login <clement.scherpereel@epitech.eu>
** 
** Started on  Thu Oct 06 12:48:34 2016 clement scherpereel
** Last update Wed Oct 26 12:56:32 2016 clement scherpereel
*/

#include <stdlib.h>
#include "../includes/include.h"

int		my_putstr(char *str)
{
  int		i;

  if (str ==  NULL)
    return (0);
  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
