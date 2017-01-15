/*
** my_strlen.c for my_strlen in /home/scherp_c/CPool_Day04
** 
** Made by clement scherpereel
** Login <clement.scherpereel@epitech.eu>
** 
** Started on  Thu Oct 06 16:19:41 2016 clement scherpereel
** Last update Tue Oct 11 10:33:49 2016 clement scherpereel
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
