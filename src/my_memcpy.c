/*
** my_memcpy.c for  in /home/esceve/EPITECH/System_Unix/PSU_2016_my_sokoban/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Tue Dec  13 13:54:19 2016
** Last update Sun Jan 15 18:13:47 2017 
*/

#include	<stdio.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/ioctl.h>

char		*my_memcpy(char *dest, char *src, size_t size)
{
  size_t	i;

  i = 0;
  while (i < size)
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
