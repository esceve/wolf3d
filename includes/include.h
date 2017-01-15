/*
** include.h for wolf3d in /home/esceve/EPITECH/C_Graphical_programing/wolf3d/includes
**
** Made by
** Login   <esceve@epitech.net>
**
** Started on  Sat Jan  14 12:19:48 2017
** Last update Sun Jan 15 18:07:00 2017 
*/

#ifndef INCLUDE_H_
#define INCLUDE_H_

#include		"./struct.h"
#include		"./position.h"
#include		"./variables.h"
#include		"./var_map.h"

#define			FOV 60.0

t_my_framebuffer	*my_framebuffer_create(int width, int height);
void			my_put_pixel(t_my_framebuffer *buffer, int x, int y,
sfColor color);

int			draw_h(t_my_framebuffer *buffer, sfVector2i *from,
sfVector2i *to, sfColor color);

int			draw_v(t_my_framebuffer *buffer, sfVector2i *from,
sfVector2i *to, sfColor color);

void			my_putchar(char c);
int			my_putstr(char *str);
char			*my_memcpy(char *dest, char *src, size_t size);
void			*my_realloc(char *str, int len);

int			my_draw_line(t_my_framebuffer *buffer, sfVector2i *from,
sfVector2i *to, sfColor color);

char			*read_file(const char *);
int			check_arg(int argc, char *arg);
int			check_map(int map);
int			all_check(int argc, char *arg);
char			**split(const char *buffer, const char);
void			display_matrix(char **);
int			sfml(t_map *map);
void			init_screen(sfVideoMode *mode);
int			init_variables(t_variable *var, sfVideoMode *mode);
int			size_to_delim(const char *buffer, const char delimiter);
int			count_chunks(const char *buffer, const char delimiter);
int			**parser(char **matrix, const char *, int *, int *);
int			size_matrix(char **matrix);
int			**mapping(int **map, char **matrix);
void			map_integer_display(int **map);
void			free_matrix(char **matrix);
int			my_strlen(char *str);
int			**transform(char **matrix);
void			handle_status(int status_code);

sfVector2f		move_forward(sfVector2f pos, float direction,
float distance);

float			raycast(sfVector2f pos, float direction, int **map,
sfVector2i mapSize);

sfVector2f		move_forward(sfVector2f pos, float direction, \
float distance);

void		draw_env(t_map *map, sfVector2f *pos, float direction, \
			 t_variable *var);

sfVector2f	move_backward(sfVector2f pos, float direction, float distance);
void		check_moves(sfVector2f *pos, float *direction, \
			    float *distance, int *moved);

int		update(t_variable *var, t_map *map, float direction, \
		       sfVector2f *pos);
sfVector2f	move_left(sfVector2f pos, float direction, float distance);
sfVector2f	move_right(sfVector2f pos, float direction, float distance);
void		check_direction(sfVector2f *pos, float *direction, \
				float *distance, int *moved);

#endif /* INCLUDE_H_ */
