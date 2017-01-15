/*
** function.c for my_sokoban in /home/esceve/EPITECH/System_Unix/PSU_2016_my_sokoban/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Mon Dec  12 10:18:46 2016
** Last update Sun Jan 15 18:09:05 2017 
*/

#include	<stdio.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"../includes/include.h"

#define		BUFF_SIZE (4096)

char		*read_file(const char *filename)
{
  int		fd;
  char		*file_content;
  char		buffer[BUFF_SIZE];
  size_t	rst;
  size_t	size;

  size = 0;
  file_content = NULL;
  if ((fd = open(filename, O_RDONLY)) <= -1)
    return (NULL);
  while ((rst = read(fd, buffer, BUFF_SIZE)) > 0)
    {
      size += rst;
      if ((file_content = my_realloc(file_content, size + 1)) == NULL)
	return (NULL);
      my_memcpy(file_content + (size - rst), buffer, rst);
      file_content[size] = 0;
    }
  close(fd);
  return (file_content);
}

int		all_check(int argc, char *arg)
{
  if (check_arg(argc, arg) == 84)
    exit (84);
  if (check_arg(argc, arg) == 84)
    return (84);
  else
    return (0);
}
