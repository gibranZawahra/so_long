/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   textures.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gizawahr <gizawahr@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 02:00:59 by gizawahr          #+#    #+#             */
/*   Updated: 2021/08/19 08:08:45 by gizawahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	set_tex(char *path, t_vars *vars, t_img *tex)
{
	const int	fd = open(path, O_RDONLY);

	if (fd < 0)
		__exit__("path Error\n", vars, FAILURE);
	tex->img = mlx_xpm_file_to_image(vars->mlx, path, &tex->width,
			&tex->height);
	if (!tex->img)
		__exit__("path Error\n", vars, FAILURE);
	tex->addr = mlx_get_data_addr(tex->img, &tex->bits_per_pixel,
			&tex->line_len, &tex->endian);
}

void	tex_all(t_vars *vars)
{
	set_tex(TEX_PLAYER, vars, &vars->tex[0]);
	set_tex(TEX_WALL, vars, &vars->tex[1]);
	set_tex(TEX_COLLECT, vars, &vars->tex[2]);
	set_tex(TEX_EXIT, vars, &vars->tex[3]);
	set_tex(TEX_ZERO, vars, &vars->tex[4]);
	set_tex(TEX_ENEMY, vars, &vars->tex[5]);
	set_tex(TEX_PLAYER2, vars, &vars->tex[6]);
	set_tex(TEX_PLAYER3, vars, &vars->tex[7]);
	set_tex(TEX_PLAYER4, vars, &vars->tex[8]);
}
