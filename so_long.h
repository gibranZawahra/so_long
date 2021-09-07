/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 08:45:04 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/31 12:54:18 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define  SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <fcntl.h>
# include "./libft/libft.h"
# include <mlx.h>

# define TEX_PLAYER "./textures/car.xpm"
# define TEX_WALL "./textures/wall.xpm"
# define TEX_COLLECT "./textures/fuel.xpm"
# define TEX_EXIT "./textures/exit.xpm"
# define TEX_ZERO "./textures/floor.xpm"

# define TEX_ENEMY "./textures/cone.xpm"
# define TEX_PLAYER2 "./textures/car2.xpm"
# define TEX_PLAYER3 "./textures/car3.xpm"
# define TEX_PLAYER4 "./textures/car4.xpm"

# if defined (__APPLE__) && (__MACH__)
#  define KEY_ESC 53
#  define KEY_W 13
#  define KEY_A 0
#  define KEY_S 1
#  define KEY_D 2
#  define RED_CROSS 17
# else
#  define KEY_ESC 65307
#  define KEY_W 119
#  define KEY_S 115
#  define KEY_A 97
#  define KEY_D 100
#  define RED_CROSS 33
# endif

# define SUCCESS 0
# define FAILURE 1

typedef struct s_check
{
	int		read;
	char	*line;
	int		len;
	int		prev_len;
	int		fd;
	int		i;
}			t_check;

typedef struct s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		height;
	int		width;
	int		line_len;
	int		endian;
}			t_img;

typedef struct s_mouv
{
	int		x;
	int		y;
}			t_mouv;

typedef struct s_key
{
	int		a;
	int		w;
	int		s;
	int		d;
	int		dir;
}			t_key;

typedef struct s_vars
{
	int		fail;
	void	*mlx;
	void	*win;
	char	**map;
	int		map_x_len;
	int		map_y_len;
	int		collect;
	t_key	*key;
	t_mouv	*mouv;
	t_img	*img;
	t_img	tex[9];
	int		counter;
}		t_vars;

int		check_is_file(char *av, t_vars *vars);
int		event_loop(t_vars *vars);

int		key_press(int keycode, t_vars *vars);
int		key_release(int keycode, t_vars *vars);
int		key_hook(int keycode);
t_key	*init_key(void);

int		__exit__(char *msg, t_vars *vars, int ret);
int		__exitc__(int set, t_vars *vars, int ret);
void	pixel_put_color(t_vars *vars, int x, int y, unsigned int color);
void	draw_pixe(t_vars *vars);

t_check	check_is_map(char *av, t_vars *vars);
void	draw_one_pixe(t_vars *vars, int i, int x_index, int y_index);
void	draw_map(t_vars *vars);
void	parsing(char *av, t_vars *vars);
int		main(int ac, char **av);
void	draw_player(t_vars *vars);
void	tex_all(t_vars *vars);
void	counter_bonus(t_vars *vars);
void	free_(void *vars);
void	set_tex(char *path, t_vars *vars, t_img *tex);
void	data_mouv(t_vars *vars);
void	bonus_key(int keycode, t_vars *vars);
void	player_mouv(t_vars *vars);
int		event_loop(t_vars *vars);
int		key_event(t_vars *vars);
void	data_mouv2(t_vars *vars, int i);
int		check_is_file(char *av, t_vars *vars);
void	play_loop(int *nbr, int r, t_vars *vars);
#endif
