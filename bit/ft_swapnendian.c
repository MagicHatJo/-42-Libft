/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapnendian.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 01:28:04 by jochang           #+#    #+#             */
/*   Updated: 2018/06/20 01:30:03 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

uint32_t	*ft_swapnendian(uint32_t *arr, int n)
{
	int		i;

	i = -1;
	while (++i < n)
		arr[i] = ft_swapendian(arr[i]);
	return (arr);
}
