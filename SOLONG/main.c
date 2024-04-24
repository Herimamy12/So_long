/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nherimam <nherimam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:21:53 by nherimam          #+#    #+#             */
/*   Updated: 2024/04/24 11:08:23 by nherimam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(void)
{
	int		fd;
	void	*mlx_ptr;

	fd = 0;
	fd = open ("./SOLONG/Map/map2.ber", O_RDONLY);
	if (fd <= 0)
		return (0);
	if (get_map_error (fd))
		return (0);
	mlx_ptr = mlx_init();
	if (mlx_ptr == NULL)
		return (0);
	mlx_new_window(mlx_ptr, 800, 500, "so_long");
	mlx_loop(mlx_ptr);
	return (0);
}
