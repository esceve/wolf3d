/*
** my_putchar.c for my_putchar in /home/scherp_c/CPool_Day06
** 
** Made by clement scherpereel
** Login <clement.scherpereel@epitech.eu>
** 
** Started on  Mon Oct 10 09:27:18 2016 clement scherpereel
** Last update Tue Oct 18 11:33:49 2016 clement scherpereel
*/

#include <unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
