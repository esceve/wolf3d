/*
** realloc.c for  in /home/esceve/EPITECH/System_Unix/PSU_2016_my_sokoban/srcs
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Tue Dec  13 14:20:11 2016
** Last update Tue Dec  13 14:20:11 2016
*/

#include <stdlib.h>
#include "../includes/include.h"

void *		my_realloc( char *str, int len)
  {
    char *ptr;

    ptr = NULL;
    if (str == NULL && len > 0)
      return (malloc(sizeof(char) * len));
    else if (len == 0 && str != NULL)
      {
	free(str);
	return (NULL);
      }
    else if (len > 0 && str != NULL)
      {
	ptr = malloc(sizeof(char) * len);
	my_memcpy(ptr, str, len);
	free(str);
	return (ptr);
      }
    else
      return (NULL);
  }