/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapendian.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 17:27:42 by jochang           #+#    #+#             */
/*   Updated: 2018/06/17 17:30:34 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

uint32_t	ft_swapendian(uint32_t i)
{
	return (((i >> 24) & 0xFF) | ((i >> 8) & 0xFF00) |
			((i << 8) & 0xFF0000) | ((i << 24) & 0xFF000000));
}
