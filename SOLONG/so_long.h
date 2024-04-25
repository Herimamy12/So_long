/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:19:14 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/25 13:47:38 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../LIST/list.h"
# include "../LIBFT/libft.h"
# include "../PRINTF/ft_printf.h"
# include "../minilibx-linux/mlx.h"
# include <fcntl.h>

typedef struct s_wmap_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
	char	**map;
}			t_wmap_mlx;

char	**get_char_map(int fd);
int		get_map_error(int fd);
int		count_length_map(char **charmap);
int		count_width_map(char **charmap);
void	free_char_two_star(char **str);
int		border_top_bottom_error(char **charmap, int length, int width);
int		border_left_right_error(char **charmap, int length, int width);
int		map_border_content_error(char **charmap, int length, int width);
int		player_error(char **charmap, int length, int width);
int		collector_error(char **charmap, int length, int width);
int		exit_error(char **charmap, int length, int width);
int		find_pos_i(char **charmap, int length, int width, char set);
int		find_pos_y(char **charmap, int length, int width, char set);
int		check_collector_exit_error(char **map, int ln, int wdth);
void	check_the_path_error(char **map, int ln, int wdth, int i, int y);
int		check_key(int key, void *param);
int		check_mouse(int action, void *param);

#endif
