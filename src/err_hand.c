/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_hand.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddaou <mhaddaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:54:38 by mhaddaou          #+#    #+#             */
/*   Updated: 2022/08/29 16:04:20 by mhaddaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	err_hand(int err)
{
	if (err == 0)
		ft_putstr_fd("Error\n=> The map is empty", 2);
	if (err == 1)
		ft_putstr_fd("Error\n=> Allocation failed", 2);
	if (err == 3)
		ft_putstr_fd("Error\n=>  error inside map no or so ea", 2);
	if (err == 4)
		ft_putstr_fd("Error\n=> path_to_the_north_texture", 2);
	if (err == 5)
		ft_putstr_fd("Error\n=> In the texture or colors", 2);
	if (err == 6)
		ft_putstr_fd("Error\n=> In the texture or color is more than one", 2);
	if (err == 7)
		ft_putstr_fd("Error\n=> the characters on the first line in not all is 1", 2);
	if (err == 8)
		ft_putstr_fd("Error\n=> path", 2);
	exit(EXIT_FAILURE);
}
